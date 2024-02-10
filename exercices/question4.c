#include "question4.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void handle_args(int argc, char *argv[], char **input_file1, char **input_file2, char **output_file) {
    if (argc < 3 || strcmp(argv[1], "--help") == 0) {
        printf("Utilisation: a.out [option] fichier1 fichier2\n");
        printf("Options :\n");
        printf("--help Afficher ces informations\n");
        printf("-o <s> Produit matriciel dans le fichier de sortie <s>, par defaut <out.txt>\n");
        exit(0);
    }

    *input_file1 = argv[1];
    *input_file2 = argv[2];

    if (argc == 5 && strcmp(argv[3], "-o") == 0) {
        *output_file = argv[4];
    } else {
        *output_file = "out.txt";
    }
}