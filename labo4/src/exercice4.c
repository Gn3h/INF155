#include <stdio.h>
#include <stdlib.h>

int nombre_de_chiffre(int nombre) {
    int compteur = 0;
    while (nombre != 0) {
        nombre /= 10;
        compteur++;
    }
    return compteur;
}

int main(void) {
    int nombre = 0;
    int chiffre = 0;

    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    chiffre = nombre_de_chiffre(nombre);

    printf("Il y a %d chiffres dans ce nombre", chiffre);

    return EXIT_SUCCESS;
}
//DONE