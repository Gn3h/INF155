#include <stdio.h>
#include <stdlib.h>

// Retourne la valeur minimale contenu dans un tableau.
// @param tablo le tableau a parcourir.
// @param taille le nombre de cases du tableau.
// @return la valeur minimale trouvee.
int valeur_min(int tablo[], int taille) {
    int min = tablo[0];
    for (int i = 1; i < taille; i++) {
        // Comparer la case courante avec le minimum connu
        // Mettre a jour le minimum si necaissaire
        if (tablo[i] < min) {
            min = tablo[i];
        }
    }
    return min;
}

// Retourne la position de la valeur minimale contenu dans un tableau.
// @param tablo le tableau a parcourir.
// @param taille le nombre de cases du tableau.
// @return la position de la valeur minimale trouvee.
int indice_min(int tablo[], int taille) {
    int min = tablo[0];
    int indice_min = 0;
    for (int i = 1; i < taille; i++) {
        if (tablo[i] < min) {
            min = tablo[i];
            indice_min = i;
        }
    }
    return indice_min;
}

int main(void) {
    int resultats[] = {49, 77, 82, 34, 87, 43, 67, 78, 79 , 42};
    int taille = 10;

    printf("La note minimale obtenue est la %deme : %d", indice_min(resultats, taille), valeur_min(resultats, taille));

    return EXIT_SUCCESS;
}