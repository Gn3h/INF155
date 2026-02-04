#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre;
    int nombre_de_chiffre = 0;
    int nombre_original;

    printf("Veuillez rentrer 1 nombre positif: ");
    scanf("%d", &nombre);
    nombre_original = nombre;
    
    for (nombre_de_chiffre; nombre > 0; nombre_de_chiffre++) {
        nombre = nombre / 10;
    }

    printf("Voici le nombre de chiffres presents dans le nombre %d : %d", nombre_original, nombre_de_chiffre);
    return EXIT_SUCCESS;
}
//DONE