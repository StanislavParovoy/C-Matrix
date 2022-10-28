#include "c_matrix.h"

/*
**
**
**
*/

matrix_t*   c_transpose(matrix_t *A)
{
    matrix_t    *result;

    result = c_create_matrix(A->columns, A->rows);
    if (result == NULL)
        return (NULL);

    for (int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            result->matrix[j][i] = A->matrix[i][j];
        }
    }
    return (result);
}