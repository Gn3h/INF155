#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double volt;
    double ohm;
    double ampere = 0;

    printf("Veuillez saisir le nombre de volt (la tension) : ");
    scanf("%lf", &volt);
    printf("Veuillez saisir le nombre d'Ohm (la resistance) : ");
    scanf("%lf", &ohm);

    ampere = volt / ohm;

    printf("Voici l'intensite selon la tension et la resistance : %lf", ampere);

    return EXIT_SUCCESS;
}