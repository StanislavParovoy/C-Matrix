#include "c_matrix.h"

/*
** c_mult_matrix(matrix_t *A, matrix_t *B)
** Матричное умножение
** RETURN A * B
*/

static int is_correct(matrix_t *A)
{
    return (A && A->rows > 0 && A->columns > 0);
}

matrix_t*   c_mult_matrix(matrix_t *A, matrix_t *B)
{
    matrix_t    *result;

    if (!is_correct(A) || !is_correct(B))
        return (NULL);

    if ((A->columns != B->rows) || (A->rows != B->columns))
        return (NULL);

    result = c_create_matrix(A->rows, B->columns);
    if (result == NULL)
        return (NULL);

    for (int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < B->columns; j++)
        {
            result->matrix[i][j] = 0;
            for (int k = 0; k < A->columns; k++)
            {

                result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
            }
        }
    }
    return (result);
}