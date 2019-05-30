#!/usr/bin/python
import numpy as np
from numpy import linalg as LA
import datetime
import math
import cProfile
import pstats
from scipy.spatial import distance
import sys
import warnings
import tensorflow as tf
from tensorflow_forward_ad import forward_gradients

from tensorflow.python.ops.parallel_for import gradients

if not sys.warnoptions:
    warnings.simplefilter("ignore")

# BA_NCAMPARAMS = 11
# ROT_IDX = 0
# C_IDX = 3
# F_IDX = 6
# X0_IDX = 7
# RAD_IDX = 9


# def cross(a, b):
#     return T.as_tensor([
#         a[1] * b[2] - a[2] * b[1],
#         a[2] * b[0] - a[0] * b[2],
#         a[0] * b[1] - a[1] * b[0]])


# def rodrigues_rotate_point(rot, X):
#     sqtheta = T.sum(T.sqr(rot))
#     theta = T.sqrt(sqtheta)
#     costheta = T.cos(theta)
#     sintheta = T.sin(theta)
#     theta_inverse = 1. / theta

#     w = theta_inverse * rot
#     w_cross_X = cross(w, X)
#     tmp = T.dot(w, X) * (1. - costheta)

#     return X * costheta + w_cross_X * sintheta + w * tmp


# def radial_distort(rad_params, proj):
#     rsq = T.sum(T.sqr(proj))
#     L = 1. + rad_params[0] * rsq + rad_params[1] * rsq * rsq
#     return proj * L


# def project(cam, X):
#     Xcam = rodrigues_rotate_point(
#         cam[ROT_IDX:ROT_IDX + 3], X - cam[C_IDX:C_IDX + 3])
#     distorted = radial_distort(cam[RAD_IDX:RAD_IDX + 2], Xcam[0:2] / Xcam[2])
#     return distorted * cam[F_IDX] + cam[X0_IDX:X0_IDX + 2]

# def project_all(n, xs):
#     cam = xs[0:11]
#     V1 = xs
#     V2 = cam
#     scanTerm, updates = theano.scan(lambda i, c : project(c, V1[(11+i*3):(14+i*3)]),
#                             outputs_info=None,
#                             sequences=T.arange(n), non_sequences=[V2])
#     res = scanTerm
#     return res.flatten()

# def project_all2(n, xs, cam):
#     V1 = xs
#     V2 = cam
#     scanTerm, updates = theano.scan(lambda i, c : project(c, V1[(11+i*3):(14+i*3)]),
#                             outputs_info=None,
#                             sequences=T.arange(n), non_sequences=[V2])
#     res = scanTerm
#     return res.flatten()

def micro(prog, dim, iters):
    # M = T.dmatrix('M')
    # V1 = T.dvector('V1')
    # V2 = T.dvector('V2')
    # VR = T.dvector('VR')
    # S = T.dscalar('S')
    V1 = tf.placeholder(tf.float32, [None])
    V2 = tf.placeholder(tf.float32, [None])
    # S = tf.placeholder(tf.float32, [])

    v1 = np.loadtxt("../data/vec1.dat", delimiter=" ")[:dim]
    v2 = np.loadtxt("../data/vec2.dat", delimiter=" ")[:dim]

    if(prog == 'add'):
        term = tf.add(V1, V2)
        # dTerm = forward_gradients(term, V1)
        # dTerm = tf.gradients(term, V1)
        dTerm = gradients.jacobian(term, V1)
    elif(prog == 'dot'):
        term = tf.tensordot(V1, V2, 1)
        dTerm = tf.gradients(term, V1)[0]
    elif(prog == 'mults'):
    	S = V2[0]
        term = tf.scalar_mul((S * S), V1)
        dTerm = gradients.jacobian(term, V2)
    elif(prog == 'max'):
        term = tf.reduce_max(V1)
        dTerm = tf.gradients(term, V1)[0]
    # elif(prog == 'ba'):
    #     n = (dim - 11) / 3
    #     # term = project_all(n, V1)
    #     # dTerm = T.jacobian(term, V1)
    #     # dTermF = theano.function([V1], dTerm)
    #     term = project_all2(n, V1, V2)
    #     dTerm = T.jacobian(term, V2)
    #     dTermF = theano.function([V1, V2], dTerm)
    #     matrixSum = theano.function([M], T.sum(M))
    else:
        raise ValueError('prog %s not handled' % prog)

    # matrixSum = theano.function([M], T.sum(M))

    

    times = []
    total = 0.0
    config = tf.ConfigProto()
    jit_level = tf.OptimizerOptions.OFF
	# Turns on XLA JIT compilation.
    # jit_level = tf.OptimizerOptions.ON_1
    # jit_level = tf.OptimizerOptions.ON_2

    config.graph_options.optimizer_options.global_jit_level = jit_level
    run_metadata = tf.RunMetadata()
    sess = tf.Session(config=config)
    tf.global_variables_initializer().run(session=sess)
    for i in range(iters+1):
    	old_v1 = v1[0]
    	old_v2 = v2[1]
    	v1[0] += 1.0 / (2.0 + old_v1)
    	v2[1] += 1.0 / (2.0 + old_v2)
        # print "\tIteration %d" % (i + 1)
        pr = cProfile.Profile()
        pr.enable()
        # Htheano, Wtheano = dTermF(a, Wtheano, Htheano), theanoRuleW(a, Wtheano, Htheano)
        if(prog == 'add' or prog == 'dot'):
        	res = sess.run(dTerm,
                 feed_dict={V1: v1,
                            V2: v2})
        elif(prog == 'max'):
            res = sess.run(dTerm,
                 feed_dict={V1: v1})
        elif(prog == 'mults'):
        	res = sess.run(dTerm,
                 feed_dict={V1: v1, V2: v2[1:2]})
        elif(prog == 'ba'):
            # res = dTermF(v1)
            res = dTermF(v1, v1[0:11])
        # total += sess.run(tf.reduce_sum(res))
        current_sum = res.sum()
        # print(res)
        # print(current_sum)
        total += current_sum
        pr.create_stats()
        stats = pstats.Stats(pr)
        # print "\t\tExecution time spent is %s." % stats.total_tt
        if i == 0 :
          v1[0] = old_v1
          v2[1] = old_v2
          total = 0.0
        else:
        	times.append(stats.total_tt)
    return (total, times)
        

def main(args):
    prog = args[0]
    dim = int(args[1])
    iters = int(args[2])

    total, times = micro(prog, dim, iters)

    print "total =%f, time per call = %f ms" % (total, reduce(lambda x, y: x + y, times) / len(times) * 1000)

if __name__ == "__main__":
    import sys
    if len(sys.argv) < 3:
        print "Usage: %s <add|lse|max|dot|mults> <dim> <iters>" % sys.argv[0]
    else:
        main(sys.argv[1:])