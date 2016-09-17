Python bindings for the Fastmap library by Christos Faloutsos
=============
This is an interface to python for the original Fastmap dimensionality
reduction algorithm library written by Christos Faloutsos in C. More 
details in the [website](http://www.cs.cmu.edu/~christos/software.html).

This code by itself provides no functionality and requires the files from 
the original library. In order to ensure that the code compiles, and to
eliminate some redundant file handling functionality, a stubbed out version
of `file.c` along with a corresponding header `file.h`.

Building
-------

#### Requirements
Updated versions of GCC, libc, Python 2.7, and Cython are required. The 
code works with the software in Ubuntu 16.04 (Cython installed using pip) 
but crashes upon importing the module when built in Ubuntu 14.04. However, 
for some reason, the binaries built in 16.04 work in 14.04.

#### Compilation
Download the original tarball [here](http://www.cs.cmu.edu/%7Echristos/SRC/fastmap.tar)
and extract it to the directory in which you want to build. Then copy the
files provided here to said directory, replacing whenever necessary. Simply
run `make`

Usage
-----
The resulting `python_fastmap.so` can be copied to a `PYTHONPATH` directory
or used from the same directory as a python script that imports it. See
`python-fastmap-test.py` for an example as well as to compare with the 
output from the original C code.

License
------
These files are provided under the MIT license, which is stated in the
file `LICENSE`. However, as mentioned before, this code relies on the 
original code linked above, which is available under separate terms given
in the tarball.
