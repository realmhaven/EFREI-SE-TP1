#include "question1.h"
#include "stdio.h"
#include "stdlib.h"

int tab2D1() {
    int **tab2D = NULL;
    unsigned int dim1 = 0, dim2 = 0, i = 0, j = 0;

    printf("dim1 & dim2 : ");
    scanf(" %d %d", &dim1, &dim2);

    tab2D = malloc(dim1 * sizeof(int *));

    for (i = 0; i < dim1; i++) {
        tab2D[i] = (int *) malloc(dim2 * sizeof(int));
    }
    for (i = 0; i < dim1; i++) {
        for (j = 0; j < dim2; j++) {
            tab2D[i][j] = i + j;
            printf(" %d", tab2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}