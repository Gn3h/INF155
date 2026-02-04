#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float demi_perimetre(float cote1, float cote2, float cote3) {
    return (cote1 + cote2 + cote3) / 2;
}

float aire_triangle(float cote1, float cote2, float cote3) {
    float s = demi_perimetre(cote1, cote2, cote3);
    return sqrt(s * (s - cote1) * (s - cote2) * (s - cote3));
}

int main(void) {
    float cote1;
    float cote2;
    float cote3;
    float aire = 0; 

    printf("Saisissez les trois cotes d'un triangle : ");
    scanf("%f\n", &cote1);
    scanf("%f\n", &cote2);
    scanf("%f", &cote3);
    
    aire = aire_triangle(cote1, cote2, cote3);
    printf("Voici l'aire du triangle : %f", aire);

    return EXIT_SUCCESS;
}
//DONE