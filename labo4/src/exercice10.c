#include <stdio.h>
#include <stdlib.h>

// Somme des diviseurs de n sauf lui-meme.
// @param n : valeur max de l'intervalle ([0, n])
// @return somme : La somme des diviseurs 
int somme_diviseurs(int n) {
    int somme = 0;
    for (int i = 1; i < n ; i++) {
        if (n % i == 0) {
            somme += i;
        }
    }
    return somme;
}

int nombres_parfait(int n) {
    for (int i = 1; i <= n; i++) {
        if (somme_diviseurs(i) == i) {
            printf("%d est un nombre parfait\n", i);
        }
    }
}

int main(void) {
    int nombre = 6;

    // printf("Entrez un nombre : ");
    // scanf("%d", &nombre);

    nombres_parfait(nombre);

    printf("Voici tous les nombres parfait entre 0 et %d : %d", nombre, nombres_parfait(nombre));

    return EXIT_SUCCESS;
}