#include <stdio.h>
#include <stdlib.h>

float celcius_fahrenheit(float degres_celcius) {
    return (degres_celcius * 9/5) + 32;
}

int main(void) {
    float degres_celcius = 0;

    printf("Veuillez rentrez la temperature en Celcius : ");
    scanf("%f", &degres_celcius);

    printf("Voici la temperature en Fahrenheit : %f", celcius_fahrenheit(degres_celcius));
    
    return EXIT_SUCCESS;
}
//DONE