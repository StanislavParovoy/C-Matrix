#include "c_matrixl.h"


void    c_remove_matrix(matrix_t *A)
{
    for (int i = 0; i < A->rows; i++)
    {
        free(A->matrix[i]);
    }

    /* free cols */
    free(A->matrix);
    A->rows = 0;
    A->columns = 0;

}