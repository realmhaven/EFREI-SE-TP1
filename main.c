#include <stdio.h>
#include <stdlib.h>
#import "question1.h"

int main() {
    int rows = 3;
    int cols = 3;

    int **matrice = create_tab2D1(rows, cols);
    create_tab2D2(rows, cols, &matrice);

    fillTab(rows,cols,matrice);
    printTab(rows, cols, matrice);
    freeTab(rows, matrice);

    return 0;
}

