#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIGNES 4
#define COLONNES 4
#define MAX_ALEATOIRE 100
#define MIN_ALEATOIRE 0

void remplir_aleatoire2d(int tableau[][COLONNES], int nb_lignes, int nb_cols) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_cols; j++) {
            tableau[i][j] = rand() % (MAX_ALEATOIRE - MIN_ALEATOIRE + 1) + MIN_ALEATOIRE;
        } 
    }
}

void afficher_tableau2d(int tableau[][COLONNES], int nb_lignes, int nb_cols) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_cols; j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}

void echanger_lignes(int tableau[][COLONNES], int nb_colonnes, int ligne1, int ligne2) {
    int tableau_temp[LIGNES][COLONNES] = {{0}};
    for (int j = 0; j < nb_colonnes; j++) {
        tableau_temp[0][j] = tableau[ligne1][j];
        tableau[ligne1][j] = tableau[ligne2][j];
        tableau[ligne2][j] = tableau_temp[0][j];
    }
}

void echanger_colonnes(int tableau[][COLONNES], int nb_lignes, int colonne1, int colonne2) {
    int tableau_temp[LIGNES][COLONNES] = {{0}};
    for (int i = 0; i < nb_lignes; i++) {
        tableau_temp[i][0] = tableau[i][colonne1];
        tableau[i][colonne1] = tableau[i][colonne2];
        tableau[i][colonne2] = tableau_temp[i][0];
    }
}

int main(void) {
    int tableau[LIGNES][COLONNES] = {{0}};
    int nb_lignes = LIGNES;
    int nb_colonnes = COLONNES;

    srand(time(NULL));

    // Remplir le tableau de valeurs aleatoire et affichez
    printf("Tableau original : \n");
    remplir_aleatoire2d(tableau, nb_lignes, nb_colonnes);
    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);
    printf("\n");

    // Affichez tableau avec ligne 0 et 2 echange
    printf("Tableau avec ligne 0 et 2 échangé : \n");
    echanger_lignes(tableau, nb_colonnes, 0, 2);
    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);
    printf("\n");

    // Affichez tableau avec colonne 1 et 3 echange
    printf("Tableau avec colonne 1 et 3 échangé : \n");
    echanger_colonnes(tableau, nb_lignes, 1, 3);
    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);
    printf("\n");

    return EXIT_SUCCESS;
}
//DONE
