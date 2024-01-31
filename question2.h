#ifndef EFREI_SE_TP1_QUESTION2_H
#define EFREI_SE_TP1_QUESTION2_H

typedef struct {
    int rows;
    int cols;
    int **matrice;
} t_matrice;

t_matrice* allocate_matrice(int rows, int cols);
void fill_matrice(t_matrice* mat);
void print_matrice(t_matrice* mat);
t_matrice* multiply_matrices(t_matrice* mat1, t_matrice* mat2);
void free_matrice(t_matrice* mat);


#endif //EFREI_SE_TP1_QUESTION2_H
