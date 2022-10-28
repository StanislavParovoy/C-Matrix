#include "c_matrix.h"

/*
** int         c_fill_matrix(matrix_t *A)
** 
**  Заполняет матрицы с помощью scanf
**
*/


int         c_fill_matrix(matrix_t *A)
{
    if (A == NULL)
        return (0);
        
    for(int i = 0; i < A->rows; i++)
    {
        for (int j = 0; j < A->columns; j++)
        {
            scanf("%lf", &A->matrix[i][j]);
        }
    }
    return (1);
}