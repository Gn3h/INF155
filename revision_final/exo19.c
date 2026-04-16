#include <stdio.h>
#include <stdlib.h>

int *agrandir_tableau(int *tableau, int taille_actuelle, int nouvelle_taille) {
    int *nouveau_tableau = realloc(tableau, nouvelle_taille * sizeof *nouveau_tableau);

    if (nouveau_tableau == NULL) {
        printf("Erreur : impossible d'agrandir le tableau\n");
        return tableau;
    }

    for (int i = taille_actuelle; i < nouvelle_taille; i++) {
        nouveau_tableau[i] = 0;
    }

    return nouveau_tableau;
}

int main(void) {
    int taille_actuelle = 5;
    int nouvelle_taille = 10;
    int *tableau = malloc(taille_actuelle * sizeof *tableau);

    if (tableau == NULL) {
        printf("Erreur : impossible d'allouer le tableau\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < taille_actuelle; i++) {
        tableau[i] = (i + 1) * 10;
    }

    tableau = agrandir_tableau(tableau, taille_actuelle, nouvelle_taille);

    for (int i = taille_actuelle; i < nouvelle_taille; i++) {
        tableau[i] = (i + 1) * 10;
    }

    printf("Contenu du tableau :\n");
    for (int i = 0; i < nouvelle_taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau);

    return EXIT_SUCCESS;
}
