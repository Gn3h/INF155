#include <stdio.h>
#include <stdlib.h>

double resistance_serie(double resistance[], int nombre_resistance) {
    double resistance_total = 0;
    
    for (int i = 0; i < nombre_resistance; i++) {
        resistance_total += resistance[i];
    }

    return resistance_total;
}

int main(void) {
    double resistance[] = {12.2, 10.0, 11.3, 14.7, 19.4};
    size_t nombre_resistance = sizeof(resistance) / sizeof(resistance[0]); // taille memoire pour tout le tableau / taille memoire pour un element = nombre element

    // sizeof(resistance) : retourne la taille de memoire pour tout le tableau; par exemple 20
    // sizeof(resistance[0]) : retourne la taille de memoire pour 1 elements; par exemple 5


    printf("La resistance totale est : %f\n", resistance_serie(resistance, nombre_resistance));
    return EXIT_SUCCESS;
}