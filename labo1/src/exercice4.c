#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void) {
    double rayon;
    double aire = 0.0;

    printf("Veuillez saisir le rayon : ");
    scanf("%lf", &rayon);

    aire = pow(rayon,2.0) * PI;

    //aire = PI * rayon * rayon;

    printf("Voici l'aire : %lf", aire);

    return EXIT_SUCCESS;
}