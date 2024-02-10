#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tests/test_Q1.h"
#include "tests/test_Q2.h"
#include "tests/test_Q3.h"
#include "exercices/question4.h"

#define rows 3
#define cols 3
#define DEFAULT_OUTPUT_FILE "out.txt"

/**************************** Q1-Q2-Q3 **********************************/

/*int main() {

    //test_Q1(rows, cols);
    //test_Q2(rows, cols);
    //test_Q3(); // ATTENTION modifier les paths dans test_Q3.c !!!

}*/

/******************************* Q4 **************************************/

void print_help() {
    printf("Utilisation: a.out [option] fichier1 fichier2\n");
    printf("Options :\n");
    printf("--help Afficher ces informations\n");
    printf("-o <s> Produit matriciel dans le fichier de sortie <s>, par defaut <out.txt>\n");
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Utiliser le flag --help pour consulter l'aide\n");
        return 1;
    }

    char *input_file1 = NULL;
    char *input_file2 = NULL;
    char *output_file = DEFAULT_OUTPUT_FILE;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--help") == 0) {
            print_help();
            return 0;
        } else if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
            output_file = argv[i + 1];
            i++;
        } else if (input_file1 == NULL) {
            input_file1 = argv[i];
        } else if (input_file2 == NULL) {
            input_file2 = argv[i];
        }
    }

    if (input_file1 == NULL || input_file2 == NULL) {
        printf("Erreur : Les noms des fichiers d'entrée sont obligatoires.\n");
        return 1;
    }

    printf("Les fichiers d'entrée sont : %s et %s\n", input_file1, input_file2);
    printf("Le fichier de sortie est : %s\n", output_file);

    return 0;
}

