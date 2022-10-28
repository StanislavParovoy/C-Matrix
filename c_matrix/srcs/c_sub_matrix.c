#include "c_matrix.h"

/*
** matrix_t* c_sub_matrix(matrix_t *A, matrix_t *B)
** Вычитание матриц
**
*/

static int is_correct(matrix_t *A)
{
    return (A && A->rows > 0 && A->columns > 0);
}

matrix_t* c_sub_matrix(matrix_t *A, matrix_t *B)
{
    matrix_t    *result;

    if (!is_correct(A) || !is_correct(B))
        return (NULL);

    if (A->rows != B->rows || A->columns != B->columns)
        return (NULL);

    result = c_create_matrix(A->rows, A->columns);
    if (result == NULL)
        return (NULL);

    for (int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
        }
    }
    return (result);
}
