#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float arc_tan(float x) {
    float arc_tan = 0;
    for (int i = 1; i <= 100; i++) {
        arc_tan += pow(-1, (i - 1)) * (pow(x, (2 * i - 1))) / (2 * i - 1); 
    }
    return arc_tan;   
}

int main(void) {
    float x; 
    printf("Entrez une valeur en radians (dans l'intervalle [-1, 1]) : ");
    scanf("%f", &x);

    printf("arctan(%f) = %f", x, arc_tan(x));

    return EXIT_SUCCESS;
}
//DONE