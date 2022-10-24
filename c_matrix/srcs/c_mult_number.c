#include "c_matrix.h"

/*
**
**
**
*/

static int is_correct(matrix_t *A)
{
    return (A && A->rows > 0 && A->columns > 0);
}

int     c_mult_number(matrix_t *A, double number, matrix_t *result)
{
    if (!is_correct(A))
        return (INCORRECT_MATRIX);

    if (c_create_matrix(A->rows, A->columns, result) != OK)
        return (MALLOC_FAILED);

    for (int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            result->matrix[i][j] = A->matrix[i][j] * number;
        }
    }
    return OK;
}