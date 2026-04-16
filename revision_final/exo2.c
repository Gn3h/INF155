#include <stdio.h>
#include <stdlib.h>

double tension_vers_celsius(double tension) {
    double temperature = (tension * 200 / 5) - 50.0;
    return temperature;
}

int main(void) {
    int nombre_de_lecture = 8;
    double tension;
    for (int i = 0; i < nombre_de_lecture; i++) {
        printf("Saisir la tension : ");
        scanf("%lf", &tension);
        printf("Temperature correspondante : %f\n", tension_vers_celsius(tension));
    }

    return EXIT_SUCCESS;
}