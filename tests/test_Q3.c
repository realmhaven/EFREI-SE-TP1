#include "test_Q3.h"
#include "../exercices/question3.h"
#include "../exercices/question2.h"
#include <stdio.h>
#include <stdlib.h>

// A MODIFIER EN FONCTION DE VOTRE ENVIRONNEMENT
#define TESTFILE "C:\\Users\\arnau\\CLionProjects\\EFREI-SE-TP1\\files\\test.txt"
#define OUTPUTFILE "C:\\Users\\arnau\\CLionProjects\\EFREI-SE-TP1\\files\\output.txt"
#define SOURCEFILE "C:\\Users\\arnau\\CLionProjects\\EFREI-SE-TP1\\files\\source.txt"
#define DESTINATIONFILE "C:\\Users\\arnau\\CLionProjects\\EFREI-SE-TP1\\files\\destination.txt"
#define MATRIXFILE "C:\\Users\\arnau\\CLionProjects\\EFREI-SE-TP1\\files\\matrix.txt"

int test_Q3() {
    // Test de read_file_content
    char *filename = TESTFILE;
    char *content = read_file_content(filename);
    if (content) {
        printf("-- Content of file test.txt is : '%s'\n ", content);
        free(content);
    } else {
        printf("-- Failed to read content from test.txt \n");
    }

    // Test de write_string_to_file
    char *text_to_write = "This is a test.";
    char *output_filename = OUTPUTFILE;
    write_string_to_file(output_filename, text_to_write);
    printf("-- '%s' has been written to output.txt \n ", text_to_write);

    // Test de copy_file_content
    char *source_filename = SOURCEFILE;
    char *destination_filename = DESTINATIONFILE;
    copy_file_content(source_filename, destination_filename);
    printf("-- Content of source.txt has been copied to destination.txt \n");

    // Test de read_matrix_from_file
    Matrix *matrix_data = read_matrix_from_file(MATRIXFILE);
    if (matrix_data) {
        printf("-- Matrix read from matrix.txt \n");
        //importés depuis la question 2 :
        print_matrice((t_matrice *) matrix_data);
        free_matrice((t_matrice *) matrix_data);
    } else {
        printf("-- Failed to read matrix from matrix.txt \n");
    }
    return 0;
}
