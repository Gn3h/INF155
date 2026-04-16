#include <stdio.h>
#include <stdlib.h>

#define NB_PARAM_MAX 10

int charger_config(const char *nom_fichier, int config[]) {
    FILE *fichier = fopen(nom_fichier, "r");
    int nb_parametres = 0;

    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 0;
    }

    while (nb_parametres < NB_PARAM_MAX && fscanf(fichier, "%d", &config[nb_parametres]) == 1) {
        nb_parametres++;
    }

    fclose(fichier);

    return nb_parametres;
}

int main(void) {
    int config[NB_PARAM_MAX];
    int nb_parametres;
    FILE *fichier = fopen("config.txt", "w");

    if (fichier == NULL) {
        printf("Erreur : impossible de creer le fichier config.txt\n");
        return EXIT_FAILURE;
    }

    fprintf(fichier, "120\n");
    fprintf(fichier, "45\n");
    fprintf(fichier, "300\n");
    fprintf(fichier, "8\n");
    fprintf(fichier, "60\n");
    fclose(fichier);

    nb_parametres = charger_config("config.txt", config);

    printf("Parametres charges :\n");
    for (int i = 0; i < nb_parametres; i++) {
        printf("Parametre %d : %d\n", i, config[i]);
    }

    return EXIT_SUCCESS;
}
