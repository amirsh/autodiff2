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

if not sys.warnoptions:
    warnings.simplefilter("ignore")

def micro(prog, dim, iters):
    M = T.dmatrix('M')
    V1 = T.dvector('V1')
    V2 = T.dvector('V2')
    VR = T.dvector('VR')
    S = T.dscalar('S')

    np.random.seed(42)
    v1 = np.random.random(dim)
    v2 = np.random.random(dim)

    if(prog == 'add'):
        term = V1 + V2
        dTerm = T.jacobian(term, V1)
        dTermF = theano.function([V1, V2], dTerm)
        matrixSum = theano.function([M], T.sum(M))
    elif(prog == 'dot'):
        term = T.dot(V1, V2)
        dTerm = T.grad(term, V1)
        dTermF = theano.function([V1, V2], dTerm)
        matrixSum = theano.function([VR], T.sum(VR))
    elif(prog == 'mults'):
        term = V1 * (S * S)
    #     dTerm = T.grad(term, S)
    #     dTermF = theano.function([V1, S], dTerm)
        J, updates = theano.scan(lambda i, y, x : T.grad(y[i], x), sequences=T.arange(term.shape[0]), non_sequences=[term, S])
        dTermF = theano.function([V1, S], J, updates=updates)
        matrixSum = theano.function([VR], T.sum(VR))
    elif(prog == 'max'):
        term = T.max(V1)
        dTerm = T.grad(term, V1)
        dTermF = theano.function([V1], dTerm)
        matrixSum = theano.function([VR], T.sum(VR))
    elif(prog == 'lse'):
        mx = T.max(V1)
        semx = T.sum(T.exp(V1 - mx))
        term = T.log(semx) + mx
        # term = T.log(T.sum(T.exp(V1)))
        dTerm = T.grad(term, V1)
        dTermF = theano.function([V1], dTerm)
        matrixSum = theano.function([VR], T.sum(VR))
    else:
        raise ValueError('prog %s not handled' % prog)

    # matrixSum = theano.function([M], T.sum(M))

    

    timesTheano = []
    total = 0.0
    for i in range(iters):
        v1[0] = 1.0 / (2.0 + v1[0])
        v2[1] = 1.0 / (2.0 + v2[1])
        # print "\tIteration %d" % (i + 1)
        pr = cProfile.Profile()
        pr.enable()
        # Htheano, Wtheano = dTermF(a, Wtheano, Htheano), theanoRuleW(a, Wtheano, Htheano)
        if(prog == 'add' or prog == 'dot'):
            res = dTermF(v1, v2)
        elif(prog == 'max' or prog == 'lse'):
            res = dTermF(v1)
        elif(prog == 'mults'):
            res = dTermF(v1, v2[1])
        total += matrixSum(res)
        pr.create_stats()
        stats = pstats.Stats(pr)
        # print "\t\tExecution time spent is %s." % stats.total_tt
        timesTheano.append(stats.total_tt)

    return (total, timesTheano)
        

def main(args):
    prog = args[0]
    dim = int(args[1])
    iters = int(args[2])

    total, timesTheano = micro(prog, dim, iters)

    print "total =%f, time per call = %f ms" % (total, reduce(lambda x, y: x + y, timesTheano) / len(timesTheano) * 1000)

if __name__ == "__main__":
    import sys
    if len(sys.argv) < 3:
        print "Usage: %s <add|lse|max|dot|mults> <dim> <iters>" % sys.argv[0]
    else:
        main(sys.argv[1:])