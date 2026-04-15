#include <stdio.h>
#include <stdlib.h>

void division_entiere(int numerateur, int diviseur, int *quotient, int *reste) {
    *quotient = numerateur / diviseur;
    *reste = numerateur % diviseur;
}

int main(void) {
    int numerateur, diviseur;
    int quotient, reste;

    printf("Veuillez saisir le numerateur : ");
    scanf("%d", &numerateur);

    printf("Veuillez saisir le diviseur : ");
    scanf("%d", &diviseur);

    division_entiere(numerateur, diviseur, &quotient, &reste);

    printf("Quotient : %d\n", quotient);
    printf("Reste : %d\n", reste);

    return EXIT_SUCCESS;
}