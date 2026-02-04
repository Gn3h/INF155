#include <stdio.h>
#include <stdlib.h>

int puissance(int base, int exposant) {
    int resultat = 1;
    while (exposant != 0) {
        resultat *= base;
        exposant--;
    }
    return resultat;
}

int main(void) {
    int base = 0;
    int exposant = 0;
    int resultat = 0;

    printf("Veuillez saisir une base : ");
    scanf("%d", &base);
    printf("Veuillez saisir un exposant : ");
    scanf("%d", &exposant);

    resultat = puissance(base, exposant);
    printf("Voici le resultat : %d", resultat);

    return EXIT_SUCCESS;
}
//DONE