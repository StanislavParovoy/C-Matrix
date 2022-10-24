#include "c_matrix.h"

/*
**
**
**
*/

/* return Sub Matrix  delete row and coums */
static matrix_t* minor_matrix(matrix_t *A, int rows, int columns)
{
    matrix_t *minor_matrix;
    
    c_create_matrix(A->rows - 1, A->columns - 1, minor_matrix);
    for (int i = 0, x = 0; i < A->rows; i++)
    {
        if (rows != i)
        {
            for (int j = 0, y = 0; j < A->columns; j++)
            {
                if (columns != j)
                {
                    minor_matrix->matrix[x][y] = A->matrix[i][j];
                    y++;
                }
            }
            x++;
        }
    }
    return (minor_matrix);
}


int c_determinant(matrix_t *A, double *result)
{
    matrix_t    *minor;
    int         return_value = INCORRECT_MATRIX;
    double      tmp_determinant;
    double      tmp_res;

    if (A->columns > 0 && A->rows > 0 && A->matrix != NULL && result)
    {
        if (A->columns == A->rows)
        {
            if (A->rows == 1 && A->columns == 1)
            {
                return_value = OK;
                *result = A->matrix[0][0];
            }
            if (A->rows == 2 && A->columns == 2)
            {
                return_value = OK;
                *result = (A->matrix[0][0] * A->matrix[1][1]) - (A->matrix[0][1] * A->matrix[1][0]);
            }
            if (A->rows > 2 && A->columns > 2)
            {
                return_value = OK;
                *result = 0;
                for (int i = 0; i < A->columns; i++)
                {
                    minor = minor_matrix(A, 0, i);  // чтобы не брать первый ряд и i-ую столбец
                    c_determinant(minor, &tmp_determinant);
                    c_remove_matrix(minor);

                    if (2 + i % 2 == 1)
                        tmp_res = (-1) * A->matrix[0][i] * tmp_determinant;
                    else
                        tmp_res = A->matrix[0][i] * tmp_determinant;
                    *result += tmp_res;
                }
            }
        }
        else
        {
            return_value = CALC_ERROR;
        }
    }
    return return_value;
}