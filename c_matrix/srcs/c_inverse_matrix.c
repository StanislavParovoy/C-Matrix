#include "c_matrix.h"

/*
** Вычисляем обратную матрицу 
**
**
*/


int     c_inverse_matrix(matrix_t *A, matrix_t **result)
{
    matrix_t    *algeb_dop;
    matrix_t    *algeb_dopT;
    double        determinant;
    
    algeb_dop = NULL;
    c_calc_complements(A, &algeb_dop);
    c_determinant(A, &determinant);
    algeb_dopT = c_transpose(algeb_dop);

    for (int i = 0; i < algeb_dopT->rows; i++)
    {
        for (int j = 0; j < algeb_dopT->columns; j++)
        {
            algeb_dopT->matrix[i][j] = algeb_dopT->matrix[i][j] / determinant;
        }
    }
    *result = algeb_dopT;
    c_remove_matrix(algeb_dop);
    return(0);
}