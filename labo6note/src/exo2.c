#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIGNES 3
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

int trouver_maximum_2d(int tableau[][COLONNES], int nb_lignes, int nb_cols) {
    int max = tableau[0][0];
    for (int i = 0; i < nb_lignes; i++){
        for (int j = 0; j < nb_cols; j++) {
            if (tableau[i][j] > max) {
                max = tableau[i][j];
            }    
        }
    }
    return max;
}

int trouver_minimum_2d(int tableau[][COLONNES], int nb_lignes, int nb_cols) {
    int min = tableau[0][0];
    for (int i = 0; i < nb_lignes; i++){
        for (int j = 0; j < nb_cols; j++) {
            if (tableau[i][j] < min) {
                min = tableau[i][j];
            }    
        }
    }
    return min;
}

int main(void) {
    int tableau[LIGNES][COLONNES] = {{0}};
    int nb_lignes = LIGNES;
    int nb_colonnes = COLONNES;

    srand(time(NULL));

    remplir_aleatoire2d(tableau, nb_lignes, nb_colonnes);
    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);
    printf("Max : %d\n", trouver_maximum_2d(tableau, nb_lignes, nb_colonnes));
    printf("Min : %d", trouver_minimum_2d(tableau, nb_lignes, nb_colonnes));

    return EXIT_SUCCESS;
}
//DONE