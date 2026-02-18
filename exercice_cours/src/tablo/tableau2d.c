#include <stdio.h>
#include <stdlib.h>

// Exemple d'une fonction
// Note : la taille 10 devrait être une constante ici!

void remplir(int tab[][10], int nb_l, int nb_c, int val) {
    int ligne;
    int col;
    for (int ligne = 0; ligne < nb_l; ligne++) {
        for (int col = 0; col < nb_c; col++) {
            tab[ligne][col] = val;
        }
    }
}

int main(void) {
    int tab[3][4] = {{1,2,4,5}, {8,4,3,2}, {7,0,0,1}};
    int ligne; 
    int col;

    for (ligne = 0; ligne < 3; ligne++) { //Boucle sur les lignes
        for (col = 0; col < 4; col++) { //Boucle sur les colonnes
            printf("%d", tab[ligne][col]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}