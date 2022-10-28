#include "c_matrix.h"

/*
** matrix_t* c_create_matrix(const int rows, const int columns)
** @rows -> кол во строк
** @columns -> кол во столбцов
** 
** RETURN NULL или указатель на выделнную память структуры и матрицы, если не удалос то NULL
*/


matrix_t* c_create_matrix(const int rows, const int columns)
{
    matrix_t    *result;
    
    if (rows <= 0 || columns <= 0)
        return (NULL);

    result = malloc(sizeof(matrix_t));
    if (!result)
        return (NULL);
    result->rows = rows;
    result->columns = columns;
    result->matrix = calloc(rows, sizeof(double *));
    if (!result->matrix)
        return (NULL);

    for (int i = 0; i < rows; i++)
    {
        result->matrix[i] = calloc(columns, sizeof(double));
        if (!result->matrix[i])
        {
            /* clean-up before exit */
            for (int j = 0; j < i; j++)
                free(result->matrix[j]);
            free(result->matrix);
            free(result);
            return (NULL);
        }
    }
    return (result);
}