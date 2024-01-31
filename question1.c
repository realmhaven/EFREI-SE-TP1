#include "question1.h"
#include "stdio.h"
#include "stdlib.h"

int **allocate_tab2D(unsigned int rows, unsigned int cols) {
    unsigned int i;
    int **tab2D = (int **) malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        tab2D[i] = (int *) malloc(cols * sizeof(int));
    }
    return tab2D;
}

void allocate_tab2D_bis(unsigned int rows, unsigned int cols, int ***tab2D) {
    unsigned int i;
    *tab2D = (int **) malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        (*tab2D)[i] = (int *) malloc(cols * sizeof(int));
    }
}

int** fillTab(unsigned int rows, unsigned int cols, int **tab2D) {
    unsigned int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter value for tab2D[%d][%d]: ", i, j);
            scanf("%d", &tab2D[i][j]);
        }
    }
    return tab2D;
}

void printTab(unsigned int rows, unsigned int cols, int **tab2D) {
    unsigned int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", tab2D[i][j]);
        printf("\n");
    }
}

void freeTab(unsigned int rows, int **tab2D) {
    unsigned int i;
    for (i = 0; i < rows; i++) {
        free(tab2D[i]);
    }
    free(tab2D);
}

//function to fill manually the created table


