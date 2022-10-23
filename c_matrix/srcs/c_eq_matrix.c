#include "c_matrix.h"

/*
**
**
**
*/




int     c_eq_matrix(matrix_t *A, matrix_t *B)
{
    if (A->rows != B->rows || A->columns != B->columns)
        return (FAILURE);
    
    for (int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            if (fabs(A->matrix[i][j] - B->matrix[i][j]) > EPSILON)
                return (FAILURE);
        }
    }
    return (SUCCESS);
}