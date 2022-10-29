#ifndef C_MATRIX_H
# define C_MATRIX_H

#include <stdlib.h> // calloc
#include <stdio.h>
#include <math.h>   //fabs

#define SUCCESS 1
#define FAILURE 0



# define EPSILON 1e-07

enum
{
    OK = 0,
    INCORRECT_MATRIX = 1,
    CALC_ERROR = 2,
    MALLOC_FAILED = 3
};


typedef struct matrix_struct
{
    double  **matrix;
    int     rows;
    int     columns;
}               matrix_t;


matrix_t*   c_create_matrix(const int rows, const int columns);
void        c_remove_matrix(matrix_t *A);
void        c_print_matrix(matrix_t *A);
int         c_fill_matrix(matrix_t *A);
int         c_eq_matrix(matrix_t *A, matrix_t *B);
matrix_t*   c_sum_matrix(matrix_t *A, matrix_t *B);
matrix_t*   c_sub_matrix(matrix_t *A, matrix_t *B);
matrix_t*   c_mult_number(matrix_t *A, double number);
matrix_t*   c_mult_matrix(matrix_t *A, matrix_t *B);
matrix_t*   c_transpose(matrix_t *A);
int         c_calc_complements(matrix_t *A, matrix_t **result);
int         c_determinant(matrix_t *A, double *result);
int         c_inverse_matrix(matrix_t *A, matrix_t **result);


#endif 