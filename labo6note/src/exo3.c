#include <stdio.h>
#include <stdlib.h>

#define LIGNES 4
#define COLONNES 4

void afficher_tableau2d(int tableau[][COLONNES], int nb_lignes, int nb_cols) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_cols; j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}

int somme_ligne(int tableau[][COLONNES], int nb_colonnes, int indice_ligne) {
    int somme = 0;
    for (int j = 0; j < nb_colonnes; j++) {
        somme += tableau[indice_ligne][j];
    }
    return somme;
}

int somme_colonne(int tableau[][COLONNES], int nb_lignes, int indice_colonne) {
    int somme = 0;
    for (int i = 0; i < nb_lignes; i++) {
        somme += tableau[i][indice_colonne];
    }
    return somme;
}

int main(void) {
    int tableau[LIGNES][COLONNES] = {{0}};
    int nb_lignes = LIGNES;
    int nb_colonnes = COLONNES;
    int somme = 0;

    // Saisir les valeurs du tableau manuellement
    printf("Entrez les valeurs du tableau ligne par ligne : ");
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_colonnes; j++)
            scanf("%d", &tableau[i][j]);
    }

    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);

    // Affichez la somme de chaque ligne
    for (int i = 0; i < nb_lignes; i++) {
        printf("La somme de la ligne %d : %d\n", i, somme_ligne(tableau, nb_colonnes, i));
    }
    
    // Affichez la somme de chaque colonne
    for (int j = 0; j < nb_colonnes; j++) {
        printf("La somme de la colonne %d : %d\n", j, somme_colonne(tableau, nb_lignes, j));
    }
    return EXIT_SUCCESS;
}
//DONE