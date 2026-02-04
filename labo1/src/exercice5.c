#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ACCELERATION 9.81
#define MASSE_VOLUMIQUE 1.2
#define PI 3.14159265358979323846

int main(void) {
    double masse;
    double rayon;
    double vitesse = 0;

    printf("Entrez la masse (kg): ");
    scanf("%lf", &masse);
    printf("Entrez le rayon (m): ");
    scanf("%lf", &rayon);

    vitesse = sqrt((2*masse*ACCELERATION)/(0.5*MASSE_VOLUMIQUE*PI*rayon*rayon));

    printf("Sa vitesse maximal en chute libre : %lf", vitesse);

    return EXIT_SUCCESS;
}