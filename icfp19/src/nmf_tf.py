#!/usr/bin/python
import numpy as np
from numpy import linalg as LA
import theano
import theano.tensor as T
import datetime
import math
import cProfile
import pstats
from theano import pp
from scipy.spatial import distance
import sys
import warnings

import tensorflow as tf
from tensorflow.python.ops.parallel_for import gradients

if not sys.warnoptions:
    warnings.simplefilter("ignore")

def nmf(distribution, m, n, k, runs):
    W = T.dvector('W')
    H = T.dvector('H')
    A = T.dmatrix('A')

    W = tf.placeholder(tf.float32, [None])
    H = tf.placeholder(tf.float32, [None])
    A = tf.placeholder(tf.float32, [None, None])

    v1 = np.loadtxt("../data/vec1.dat", delimiter=" ")[:(m * n)]
    v2 = np.loadtxt("../data/vec2.dat", delimiter=" ")[:(m + n)]
    a = v1.reshape(m, n)
    w = v2[:m]
    h = v2[m:(m+n)]

    # print "Deriving Theano rules"
    Abar = tf.einsum('i,j->ij', W, H)

    neglogexp = tf.reduce_sum(tf.add(tf.log(Abar), tf.divide(A, Abar)))
    diffH = tf.gradients(neglogexp, H)[0]

    
    times = []
    total = 0.0
    config = tf.ConfigProto()
    jit_level = tf.OptimizerOptions.OFF
    # Turns on XLA JIT compilation.
    # jit_level = tf.OptimizerOptions.ON_1
    # jit_level = tf.OptimizerOptions.ON_2

    config.graph_options.optimizer_options.global_jit_level = jit_level
    sess = tf.Session(config=config)
    tf.global_variables_initializer().run(session=sess)
    for i in range(runs+1):
        old_h = h[0]
        old_w = w[0]
        h[0] += 1.0 / (2.0 + old_h)
        w[0] += 1.0 / (2.0 + old_w)
        # print "\tIteration %d" % (i + 1)
        pr = cProfile.Profile()
        pr.enable()
        res = sess.run(diffH,
                 feed_dict={W: w, H: h, A: a})
        total += res.sum()
        pr.create_stats()
        stats = pstats.Stats(pr)
        # print "\t\tExecution time spent is %s." % stats.total_tt
        if i == 0 :
          h[0] = old_h
          w[0] = old_w
          total = 0.0
        else:
            times.append(stats.total_tt)

    sess.close()
    return (total, times)
        
def main(args):
    distribution = args[0]
    dim = int(args[1])
    m = dim / 10000
    n = dim % 10000
    runs = int(args[2]) if len(args) > 2 else 1

    total, times = nmf(distribution, m, n, 1, runs)

    print "total =%f, time per call = %f ms" % (total, reduce(lambda x, y: x + y, times) / len(times) * 1000)

if __name__ == "__main__":
    import sys
    if len(sys.argv) < 3:
        print "Usage: %s <gaussian|exponential|poisson> <rows*10000+columns> [runs] [check]" % sys.argv[0]
    else:
        main(sys.argv[1:])