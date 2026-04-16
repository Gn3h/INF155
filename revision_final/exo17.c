#include <stdio.h>
#include <stdlib.h>

void sauvegarder_mesures(const char *nom_fichier, double tab_mesure[], int nb_mesures) {
    FILE *fichier = fopen(nom_fichier, "w");

    if (fichier == NULL) {
        printf("Erreur : impossible de creer le fichier\n");
        return;
    }

    for (int i = 0; i < nb_mesures; i++) {
        fprintf(fichier, "%.2f\n", tab_mesure[i]);
    }

    fclose(fichier);
}

void ajouter_mesure(const char *nom_fichier, double mesure) {
    FILE *fichier = fopen(nom_fichier, "a");

    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier\n");
        return;
    }

    fprintf(fichier, "%.2f\n", mesure);
    fclose(fichier);
}

int main(void) {
    double mesures[5] = {21.5, 22.0, 23.4, 20.8, 19.9};

    sauvegarder_mesures("mesures.txt", mesures, 5);
    ajouter_mesure("mesures.txt", 24.1);
    ajouter_mesure("mesures.txt", 25.6);

    printf("Les mesures ont ete sauvegardees dans mesures.txt\n");

    return EXIT_SUCCESS;
}
