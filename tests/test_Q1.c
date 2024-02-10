#include "test_Q1.h"
#include "../exercices/question1.h"
#include "stdio.h"
#include "stdlib.h"

int test_Q1(unsigned int rows, unsigned int cols){
    int **matrice = allocate_tab2D(rows, cols);
    allocate_tab2D_bis(rows, cols, &matrice);

    fillTab(rows,cols,matrice);
    printTab(rows, cols, matrice);
    freeTab(rows, matrice);

    return 0;
}
