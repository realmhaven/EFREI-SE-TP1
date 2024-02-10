#ifndef EFREI_SE_TP1_QUESTION3_H
#define EFREI_SE_TP1_QUESTION3_H

typedef struct {
    int rows;
    int cols;
    int **matrix;
} Matrix;

char *read_file_content(const char *filename);

void write_string_to_file(const char *filename, const char *content);

void copy_file_content(const char *source_filename, const char *destination_filename);

Matrix *read_matrix_from_file(const char *filename);

#endif //EFREI_SE_TP1_QUESTION3_H
