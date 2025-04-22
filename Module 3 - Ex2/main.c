#include <stdio.h>

void main(int argc, const char * argv[]) {

    if (argv[1] == NULL) {
        printf("Erreur : il faut au moins un argument !\n");
    }

    FILE * fichier;
    fichier = fopen(argv[1], "r");

    if (fichier == NULL) {
        printf("Fichier %s imposible a ouvrir !\n", argv[1]);
    }


    int numeroLigne = 0;
    char ligne[100];
    while (!feof(fichier)) {
        numeroLigne++;
        fgets(ligne, 100, fichier);
        printf("\033[1;32m");
        printf("%02d  ", numeroLigne);
        printf("\033[1;0m");
        printf("%s", ligne);
    }

    fclose(fichier);
}