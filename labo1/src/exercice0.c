#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int annee_actuelle; //Année de la date d'aujourd'hui
    int annee_naissance; //Année de naissance de l'usager
    int age = 0; //Ici, pourquoi assignee une valeur a age??

    printf("Veuillez saisir l'annee acutelle: ");
    scanf("%d", &annee_actuelle);

    printf("Veuillez saisir votre annee de naissance: ");
    scanf("%d", &annee_naissance);

    age = annee_actuelle - annee_naissance;
    printf("Au cas ou vous l'auriez oublie, vous avez: %d ans. \n", age);

    return EXIT_SUCCESS;
}