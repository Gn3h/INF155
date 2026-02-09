#include <stdio.h>
#include <stdlib.h>

// Calcul la taille du nombre (unite, dizaine, centaine, etc)
// @param n le nombre que l'on veut trouver la taille
// @return renvoit la taille.
int taille_nombre(int n){
    int compteur = 0;

    while (n >= 1) {
        n /= 10;
        compteur++;
    }
    return compteur;
}

// Recoit un nombre et une position (0 pour les unites, 1 pour les dizaines, etc.)
// et retourne le chiffre a cette position
// @param nombre le nombre dont on veut extraire ces chiffres
// @param position la position du chiffre que l'on veut extraire du nombre
// @return le chiffre extrait
int extraire_chiffre(int nombre, int position) {
    for (int i = 0; i < position; i++) {
        nombre /= 10;
    }
    return nombre % 10;
}

// Verifie si le nombre donne est un palindrome
// @param nombre Le nombre que l'on veut verifier
// @return 1 pour vrai, 0 pour faux
int est_palindrome(int nombre) {
    int est_pareil = 1;
    while (est_pareil == 1) {
        for (int i = 0; i <= (taille_nombre(nombre) / 2); i++) {
            if (extraire_chiffre(nombre, i) == extraire_chiffre(nombre, taille_nombre(nombre) - 1 - i)) {
                est_pareil = 1;
            }
            else {
                return 0;
            }
        }
        return 1;
    }
}

int main(void) {
    // int nombre = 12345;
    // int position = 4;

    // printf("%d\n", extraire_chiffre(nombre, position));
    // printf("%d", extraire_chiffre(nombre, position + taille_nombre(nombre) - 1));

    // if (extraire_chiffre(nombre, position) == extraire_chiffre(nombre, taille_nombre(nombre) - 1 - position)) {
    //     printf("%d et %d pareil", extraire_chiffre(nombre, position), extraire_chiffre(nombre, taille_nombre(nombre) - 1 - position));
    // }
    // else {
    //     printf("%d et %d pas pareil", extraire_chiffre(nombre, position), extraire_chiffre(nombre, taille_nombre(nombre) - 1 - position));
    // }
    int nombre;

    printf("Rentrez un nombre : ");
    scanf("%d", &nombre);

    if (est_palindrome(nombre)) {
        printf("%d est un palindrome.", nombre);
    }
    else {
        printf("Ce n'est pas un palindrome.");
    }

    return EXIT_SUCCESS;
}
//DONE