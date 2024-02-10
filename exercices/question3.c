#include "question3.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *read_file_content(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file %s\n", filename);
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *content = malloc(length + 1);
    if (content) {
        fread(content, 1, length, file);
        content[length] = '\0';
    }

    fclose(file);
    return content;
}

/**********************************************************************/

void write_string_to_file(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to open file %s\n", filename);
        return;
    }

    fprintf(file, "%s", content);
    fclose(file);
}

/**********************************************************************/

void copy_file_content(const char *source_filename, const char *destination_filename) {
    char *content = read_file_content(source_filename);
    if (content) {
        write_string_to_file(destination_filename, content);
        free(content);
    }
}

/**********************************************************************/


Matrix *read_matrix_from_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file %s\n", filename);
        return NULL;
    }

    int rows, cols;
    fscanf(file, "%d %d", &rows, &cols); //lecture des dimensions de la matrice

    int **matrix = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *) malloc(cols * sizeof(int));
    }

    // Remplissage de la matrice avec les valeurs du fichier
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fscanf(file, "%d", &matrix[i][j]); //lecture des valeurs de la matrice
        }
    }
    fclose(file);

    Matrix *result = (Matrix *) malloc(sizeof(Matrix)); //allocation de la structure
    result->rows = rows;
    result->cols = cols;
    result->matrix = matrix;

    return result;
}