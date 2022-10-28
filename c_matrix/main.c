#include <stdio.h>
#include "include/c_matrix.h"


int main()
{
    matrix_t *A;
    matrix_t *B;

    A = c_create_matrix(3, 3);
    c_print_matrix(A);
    c_fill_matrix(A);
    c_print_matrix(A);
    
    B = c_create_matrix(3, 3);
    c_print_matrix(B);
    c_fill_matrix(B);
    c_print_matrix(B);

    printf("c_eq_matrix\n");
    printf("%d\n", c_eq_matrix(A, B));


    printf("c_sum_matrix\n");
    c_print_matrix(c_sum_matrix(A,B));
    printf("\n");

    printf("c_sub_matrix\n");
    c_print_matrix(c_sub_matrix(A,B));
    printf("\n");

    printf("c_mult_number\n");
    c_print_matrix(c_mult_number(A, 7));
    printf("\n");


    printf("c_transpose\n");
    c_print_matrix(c_transpose(A));
    printf("\n");

    printf("c_determinant\n");
    double res  = 5;
    c_print_matrix(A);
    c_determinant(A, &res);
    printf("%lf\n", res);

    matrix_t *res_minors;
    res_minors = NULL;
    printf("c_calc_complements\n");
    c_calc_complements(A, &res_minors);
    c_print_matrix(res_minors);
    printf("\n");

    matrix_t *res_minorss;
    printf("c_inverse_matrix\n");
    c_inverse_matrix(A, &res_minorss);
    c_print_matrix(res_minorss);
    printf("\n");
    
    return (0);
}