#include "test_Q2.h"
#include "../exercices/question2.h"
#include "stdio.h"

int test_Q2(unsigned int rows, unsigned int cols){
    // matrice 1
    t_matrice* mat1 = allocate_matrice(rows, cols);
    if (mat1 == NULL) {
        printf("Failed to allocate matrix 1\n");
        return 1;
    }

    printf("Fill matrix 1:\n");
    fill_matrice(mat1);

    // matrice 2
    t_matrice* mat2 = allocate_matrice(rows, cols);
    if (mat2 == NULL) {
        printf("Failed to allocate matrix 2\n");
        free_matrice(mat1);
        return 1;
    }

    printf("Fill matrix 2:\n");
    fill_matrice(mat2);

    //print matrices
    printf("Matrix 1:\n");
    print_matrice(mat1);

    printf("Matrix 2:\n");
    print_matrice(mat2);

    // calculate
    t_matrice* result = multiply_matrices(mat1, mat2);
    if (result == NULL) {
        printf("Failed to multiply matrices\n");
        free_matrice(mat1);
        free_matrice(mat2);
        return 1;
    }

    printf("Result of multiplication:\n");
    print_matrice(result);

    free_matrice(mat1);
    free_matrice(mat2);
    free_matrice(result);

    return 0;
}