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
from tensorflow.python.ops import array_ops
from tensorflow.python.ops import control_flow_ops
from tensorflow.python.ops import tensor_array_ops
from tensorflow.python.framework import dtypes


from tensorflow.python.ops.parallel_for import gradients

if not sys.warnoptions:
    warnings.simplefilter("ignore")

BA_NCAMPARAMS = 11
ROT_IDX = 0
C_IDX = 3
F_IDX = 6
X0_IDX = 7
RAD_IDX = 9


def cross(a, b):
    return tf.convert_to_tensor([
        a[1] * b[2] - a[2] * b[1],
        a[2] * b[0] - a[0] * b[2],
        a[0] * b[1] - a[1] * b[0]])


def rodrigues_rotate_point(rot, X):
    sqtheta = tf.reduce_sum(tf.square(rot))
    theta = tf.sqrt(sqtheta)
    costheta = tf.cos(theta)
    sintheta = tf.sin(theta)
    theta_inverse = tf.divide(1., theta)

    w = tf.scalar_mul(theta_inverse, rot)
    w_cross_X = cross(w, X)
    tmp = tf.tensordot(w, X, 1) * (1. - costheta)

    return tf.add(tf.scalar_mul(costheta,  X), tf.add(tf.scalar_mul(sintheta, w_cross_X), tf.scalar_mul(tmp, w)))


def radial_distort(rad_params, proj):
    rsq = tf.reduce_sum(tf.square(proj))
    L = 1. + rad_params[0] * rsq + rad_params[1] * rsq * rsq
    return tf.scalar_mul(L, proj)


def project(cam, X):
    Xcam = rodrigues_rotate_point(
        cam[ROT_IDX:ROT_IDX + 3], tf.subtract(X, cam[C_IDX:C_IDX + 3]))
    distorted = radial_distort(cam[RAD_IDX:RAD_IDX + 2], tf.scalar_mul(1 / Xcam[2], Xcam[0:2]))
    return tf.add(tf.scalar_mul(cam[F_IDX], distorted), cam[X0_IDX:X0_IDX + 2])

# def project_all(n, xs):
#     cam = xs[0:11]
#     V1 = xs
#     V2 = cam
#     scanTerm, updates = theano.scan(lambda i, c : project(c, V1[(11+i*3):(14+i*3)]),
#                             outputs_info=None,
#                             sequences=T.arange(n), non_sequences=[V2])
#     res = scanTerm
#     return res.flatten()

def project_all2(n, xs, cam):
    V1 = xs
    V2 = cam
    # res = tf.map_fn(lambda i: project(V2, V1[(11+i*3):(14+i*3)]), np.arange(n))
    loop_vars = [
        array_ops.constant(0, dtypes.int32),
        tensor_array_ops.TensorArray(V2.dtype, n)
    ]
    _, res = control_flow_ops.while_loop(
        lambda j, _: j < n,
        lambda j, result: (j + 1,
                           result.write(j, project(V2, V1[(11+j*3):(14+j*3)]))),
        loop_vars
    )
    return tf.reshape(res.stack(), [-1])
    # scanTerm, updates = theano.scan(lambda i, c : project(c, V1[(11+i*3):(14+i*3)]),
    #                         outputs_info=None,
    #                         sequences=T.arange(n), non_sequences=[V2])
    # res = scanTerm
    # return res.flatten()

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
    elif(prog == 'ba'):
        n = (dim - 11) / 3
        term = project_all2(n, V1, V2)
        dTerm = gradients.jacobian(term, V2)
    else:
        raise ValueError('prog %s not handled' % prog)

    # matrixSum = theano.function([M], T.sum(M))

    

    times = []
    total = 0.0
    config = tf.ConfigProto()
    # jit_level = tf.OptimizerOptions.OFF
	# Turns on XLA JIT compilation.
    jit_level = tf.OptimizerOptions.ON_1
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
            res = sess.run(dTerm,
                 feed_dict={V1: v1, V2: v1[0:11]})
            # res = dTermF(v1, v1[0:11])
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

    sess.close()
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