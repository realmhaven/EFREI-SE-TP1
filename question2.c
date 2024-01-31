#include "question2.h"
#import "question1.h"
#include "stdio.h"
#include "stdlib.h"

/****************************************************************************/

t_matrice *allocate_matrice(int rows, int cols) {
    t_matrice *p_matrice = malloc(sizeof(t_matrice));
    if (p_matrice == NULL) {
        return NULL;
    }

    p_matrice->rows = rows;
    p_matrice->cols = cols;
    p_matrice->matrice = allocate_tab2D(rows, cols);

    if (p_matrice->matrice == NULL) {
        free(p_matrice);
        return NULL;
    }

    return p_matrice;
}

/****************************************************************************/

void fill_matrice(t_matrice *mat) {
    if (mat == NULL || mat->matrice == NULL) {
        return;
    }

    mat->matrice = fillTab(mat->rows, mat->cols, mat->matrice);
}

/****************************************************************************/

void print_matrice(t_matrice *mat) {
    if (mat == NULL || mat->matrice == NULL) {
        return;
    }

    printTab(mat->rows, mat->cols, mat->matrice);
}

/****************************************************************************/

t_matrice* multiply_matrices(t_matrice* mat1, t_matrice* mat2) {
    if (mat1 == NULL || mat2 == NULL || mat1->matrice == NULL || mat2->matrice == NULL) {
        return NULL;
    }

    if (mat1->cols != mat2->rows) {
        printf("Error : number of columns in matrix 1 must be equal to number of rows in matrix 2\n");
        return NULL;
    }

    t_matrice* result = allocate_matrice(mat1->rows, mat2->cols);
    if (result == NULL) {
        return NULL;
    }

    for (int i = 0; i < mat1->rows; i++) {
        for (int j = 0; j < mat2->cols; j++) {
            result->matrice[i][j] = 0;
            for (int k = 0; k < mat1->cols; k++) {
                result->matrice[i][j] += mat1->matrice[i][k] * mat2->matrice[k][j];
            }
        }
    }

    return result;
}

/****************************************************************************/

void free_matrice(t_matrice* mat) {
    if (mat == NULL || mat->matrice == NULL) {
        return;
    }

    freeTab(mat->rows, mat->matrice);
    free(mat);
}