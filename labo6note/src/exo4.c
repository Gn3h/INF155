#include <stdio.h>
#include <stdlib.h>

#define LIGNES 3
#define COLONNES 3 

void afficher_tableau2d(int tableau[][COLONNES], int nb_lignes, int nb_cols) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_cols; j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}

void multiplier_scalaire(int tableau[][COLONNES], int nb_lignes, int nb_colonnes, int k) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++) {
            tableau[i][j] *= k;
        }
    }
}

int main(void) {
    int tableau[LIGNES][COLONNES] = {{0}};
    int nb_lignes = LIGNES;
    int nb_colonnes = COLONNES;
    int fact_mult;

    // Saisir les valeurs du tableau manuellement
    printf("Entrez les valeurs du tableau %dx%d ligne par ligne : ", nb_lignes, nb_colonnes);
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++)
            scanf("%d", &tableau[i][j]);
    }

    // Saisir un facteur multiplicatif (k)
    printf("Saisir un facteur multiplicatif (k) : ");
    scanf("%d", &fact_mult);

    // Affichage du tableau originale
    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);
    printf("\n");

    // Affichage tableau modifié
    multiplier_scalaire(tableau, nb_lignes, nb_colonnes, fact_mult);
    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);

    return EXIT_SUCCESS;
}
//DONE