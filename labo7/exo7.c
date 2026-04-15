#include <stdio.h>
#include <stdlib.h>

int* lire_entier(){
    int entier;
    printf("Entrez une valeur : ");
    scanf("%d", &entier);
    return &entier;
}

int main(void) {
    int *adresse = lire_entier();

    printf("Valeur saisie : %d", *adresse);

    return EXIT_SUCCESS;
}