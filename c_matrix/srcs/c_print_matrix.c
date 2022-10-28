#include "c_matrix.h"

/*
** void        c_print_matrix(matrix_t *A)
** 
** Вывод матрицы
** 
** 
*/

void        c_print_matrix(matrix_t *A)
{
    if (A == NULL)
        return;

    for(int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            printf("%lf ", A->matrix[i][j]);
        }
        printf("\n");
    }
}