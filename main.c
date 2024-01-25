#include <stdio.h>
#include <stdlib.h>
#import "question1.h"

int main() {
    int rows = 3;
    int cols = 3;

    int **matrice = create_tab2D1(rows, cols);
    fillTab(rows,cols,matrice);
    printTab(rows, cols, matrice);

    return 0;
}

