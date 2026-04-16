#include <stdio.h>
#include <stdlib.h>

int compter_lignes(const char *nom_fichier) {
    FILE *fichier = fopen(nom_fichier, "r");
    int code;
    int nb_lignes = 0;

    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return -1;
    }

    while (fscanf(fichier, "%d", &code) == 1) {
        nb_lignes++;
    }

    fclose(fichier);

    return nb_lignes;
}

int charger_codes(const char *nom_fichier, int codes[], int nb_codes) {
    FILE *fichier = fopen(nom_fichier, "r");
    int nb_lus = 0;

    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 0;
    }

    while (nb_lus < nb_codes && fscanf(fichier, "%d", &codes[nb_lus]) == 1) {
        nb_lus++;
    }

    fclose(fichier);

    return nb_lus;
}

int code_plus_frequent(int codes[], int nb_codes) {
    int code_frequent = codes[0];
    int max_frequence = 0;

    for (int i = 0; i < nb_codes; i++) {
        int frequence = 0;

        for (int j = 0; j < nb_codes; j++) {
            if (codes[j] == codes[i]) {
                frequence++;
            }
        }

        if (frequence > max_frequence) {
            max_frequence = frequence;
            code_frequent = codes[i];
        }
    }

    return code_frequent;
}

int main(void) {
    const char *nom_fichier = "journal.txt";
    int nb_codes;
    int nb_lus;
    int *codes;
    FILE *fichier = fopen(nom_fichier, "w");

    if (fichier == NULL) {
        printf("Erreur : impossible de creer le fichier %s\n", nom_fichier);
        return EXIT_FAILURE;
    }

    fprintf(fichier, "404\n");
    fprintf(fichier, "500\n");
    fprintf(fichier, "404\n");
    fprintf(fichier, "403\n");
    fprintf(fichier, "500\n");
    fprintf(fichier, "404\n");
    fprintf(fichier, "401\n");
    fclose(fichier);

    nb_codes = compter_lignes(nom_fichier);
    if (nb_codes <= 0) {
        printf("Aucun code a lire.\n");
        return EXIT_FAILURE;
    }

    codes = malloc(nb_codes * sizeof *codes);
    if (codes == NULL) {
        printf("Erreur : impossible d'allouer la memoire\n");
        return EXIT_FAILURE;
    }

    nb_lus = charger_codes(nom_fichier, codes, nb_codes);
    if (nb_lus != nb_codes) {
        printf("Erreur : nombre de codes lus incorrect\n");
        free(codes);
        return EXIT_FAILURE;
    }

    printf("Nombre de codes lus : %d\n", nb_codes);
    printf("Code le plus frequent : %d\n", code_plus_frequent(codes, nb_codes));

    free(codes);

    return EXIT_SUCCESS;
}
