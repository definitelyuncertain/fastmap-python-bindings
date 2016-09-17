from distutils.core import setup, Extension
import numpy
from Cython.Distutils import build_ext

setup(
    cmdclass={'build_ext': build_ext},
    ext_modules=[Extension("python_fastmap",
                sources=["python-fastmap-interface.pyx", "python-fastmap-bindings.c", "object.c", "oa.c", "vector.c", "matrix.c", "file.c" ],
                include_dirs=[numpy.get_include()],extra_compile_args=['-std=c99'])]
)
