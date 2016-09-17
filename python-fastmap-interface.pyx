import numpy as np
from numpy import random as rn
cimport numpy as np

np.import_array()

# Import the C definition
cdef extern from "python-fastmap.h":
    void fastmap_raw(double * X, int n, int d, int k, double * out)

# Wrapper for the C function
def fastmap(np.ndarray[double, ndim=2, mode="c"] X not None, int k) :
    cdef int n = X.shape[0]
    cdef int d = X.shape[1]
    cdef np.ndarray[double, ndim=2, mode="c"] out = np.zeros((n,k),dtype=np.float64)
    fastmap_raw(<double*>np.PyArray_DATA(X),n,d,k,<double*>np.PyArray_DATA(out))
    return out
