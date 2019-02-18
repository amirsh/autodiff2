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

def nmf(distribution, m, n, k, runs):
    W = T.dmatrix('W')
    H = T.dmatrix('H')
    A = T.dmatrix('A')
    M = T.dmatrix('M')

    np.random.seed(42)
    a = np.random.random((m, n))        
    w = np.random.random((m, k))
    h = np.random.random((k, n))

    # print "Deriving Theano rules"
    Abar = theano.dot(W, H)

    # neglogexp = -1*T.log( T.prod(  exprs  ))
    neglogexp = T.sum(T.log(Abar) + A / Abar)
    diffH = T.grad(neglogexp, H)
    theanoRuleH = theano.function([A, W, H], diffH)
    matrixSum = theano.function([M], T.sum(M))

    
    Htheano = h
    Wtheano = w
    timesTheano = []
    total = 0.0
    for i in range(runs):
        # print "\tIteration %d" % (i + 1)
        pr = cProfile.Profile()
        pr.enable()
        # Htheano, Wtheano = theanoRuleH(a, Wtheano, Htheano), theanoRuleW(a, Wtheano, Htheano)
        Htheano = theanoRuleH(a, Wtheano, Htheano)
        total += matrixSum(Htheano)
        pr.create_stats()
        stats = pstats.Stats(pr)
        # print "\t\tExecution time spent is %s." % stats.total_tt
        timesTheano.append(stats.total_tt)

    return (total, timesTheano)
        

#Gaussian Distribution Prog
# Testing timing of Updating H only
# Format of m,n,k is multiplication of W_(m,k)*H_(k,n)
# -m
# -k
# -n
# -TPE is type 
# tpe:
#     
#     0: Theano
#    1: Lago-Code
def main(args):
    distribution = args[0]
    m = int(args[1])
    n = int(args[2])
    k = int(args[3])
    runs = int(args[4]) if len(args) > 4 else 1

    total, timesTheano = nmf(distribution, m, n, k, runs)

    print "total =%f, time per call = %f s" % (total, reduce(lambda x, y: x + y, timesTheano) / len(timesTheano))

if __name__ == "__main__":
    import sys
    if len(sys.argv) < 3:
        print "Usage: %s <gaussian|exponential|poisson> <rows> <columns> <k> [runs] [check]" % sys.argv[0]
    else:
        main(sys.argv[1:])