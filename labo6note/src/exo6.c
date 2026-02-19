#include <stdio.h>
#include <stdlib.h>

#define TAILLE 3

int est_symetrique(int tableau[TAILLE][TAILLE], int taille_matrix) {
    int est_pareil = 1;
    while (est_pareil == 1) {
        for (int i = 0; i < TAILLE; i++) {
            for (int j = 0; j < TAILLE; j++) {
                if (tableau[i][j] == tableau[j][i]) {
                    est_pareil = 1;
                }
                else {
                    return 0;
                }
            }
        }
        return 1;
    }
}

void afficher_tableau2d(int tableau[][TAILLE], int nb_lignes, int nb_cols) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_cols; j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int tableau[TAILLE][TAILLE] = {{0}};
    int nb_lignes = TAILLE;
    int nb_colonnes = TAILLE;

    // Saisir les valeurs manuellement ligne par ligne
    printf("Entrez les valeurs du tableau %dx%d ligne par ligne : ", TAILLE, TAILLE);
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++)
            scanf("%d", &tableau[i][j]);
    }

    // Affiche si matrix est symetrique ou non
    if (est_symetrique(tableau, TAILLE) == 1) {
        printf("Le tableau : \n");
        afficher_tableau2d(tableau, TAILLE, TAILLE);
        printf("Elle est symétrique.");
    }
    else {
        printf("Le tableau : \n");
        afficher_tableau2d(tableau, TAILLE, TAILLE);
        printf("Elle n'est pas symétrique.");
    }
    
    return EXIT_SUCCESS;
}
//DONE