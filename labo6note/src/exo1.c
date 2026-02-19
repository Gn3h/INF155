#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLONNES 5
#define LIGNES 4
#define MAX_ALEATOIRE  50
#define MIN_ALEATOIRE  1

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

int main(void) {
    int tableau[LIGNES][COLONNES] = {{0}};
    int nb_lignes = LIGNES;
    int nb_cols = COLONNES;
    
    srand(time(NULL));

    remplir_aleatoire2d(tableau, nb_lignes, nb_cols);
    afficher_tableau2d(tableau, nb_lignes, nb_cols);

    return EXIT_SUCCESS;
}
//DONE