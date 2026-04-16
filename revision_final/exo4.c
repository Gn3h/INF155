#include <stdio.h>
#include <stdlib.h>

int saisir_vitesse() {
    int vitesse;

    do {
        printf("Veuillez saisir une vitesse entre 0 et 100 : ");
        scanf("%d", &vitesse);
    } while (vitesse < 0 || vitesse > 100);
    
    return vitesse;
}

int main(void) {
    for (int i = 0; i < 3; i++) { 
        int vitesse = saisir_vitesse();
        printf("Vitesse saisie : %d\n", vitesse);
    }

    return EXIT_SUCCESS;
}