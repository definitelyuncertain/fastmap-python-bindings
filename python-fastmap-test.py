from numpy import *
from python_fastmap import fastmap

print 'starting'
X=ascontiguousarray(loadtxt('tst.large'))
print 'loaded',X.shape
Xd=fastmap(X,2)
print Xd
