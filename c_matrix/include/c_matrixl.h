#ifndef C_MATRIX_H
# define C_MATRIX_H

#include <stdlib.h> // calloc

enum
{
    OK = 0,
    INCORRECT_MATRIX = 1,
    CALC_ERROR = 2,
    MALLOC_FAILED = 3
};

enum
{
    FAILURE = 0,
    SUCCESS = 1
};

typedef struct matrix_struct
{
    double  **matrix;
    int     rows;
    int     columns;
}               matrix_t;

int c_create_matrix(const int rows, const int columns, matrix_t *result);


#endif 