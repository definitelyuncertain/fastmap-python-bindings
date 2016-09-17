#include "def.h"
#include "oa.h"
#include "object.h"
#include "matrix.h"
#include "vector.h"
#include <stdio.h>
#include "python-fastmap.h"

void fastmap_raw(double * X, int n, int d, int k, double * out)
{
    OA * data_orig;
    OBJECT * row_obj;
    data_orig = oaalloc(n);
    row_obj = oballoc(d);
    int i=0,j=0;
    // Convert the C array from numpy to the format used by the library
    for(i=0; i<n; i++)
    {
        for(j=0; j<d;j++)
            obput(row_obj,j,X[i*d+j]);
        oaput(data_orig,i,row_obj);
    }
    // Call the fastmap routine
    MATRIX * data_reduced = fastmap(data_orig,k);
    VECTOR * out_row;
    // Extract the output into the provided array
    for(i=0; i<n; i++)
    {
        out_row = matrixget(data_reduced,i);
        for(j=0; j<k; j++)
            out[i*k+j] = vecget(out_row,j);
    }
    // Free memory
    matrixfree(data_reduced);
    oafree(data_orig);
    obfree(row_obj);
}
