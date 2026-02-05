#include <stdio.h>
#include <stdlib.h>

//Position va de droite a gauche. Ex. : 12345 position 1 = 5, position 2 = 4.
//Position 1 = unite, position 2 = dizaine
int extraire_chiffre(int nombre, int position) {
    for (int i = 1; i < position; i++) {
        nombre /= 10;
    }
    return nombre % 10;
}

int main(void) {
    int nombre;
    int position;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    printf("Entrez la position du chiffre : ");
    scanf("%d", &position);

    printf("Le chiffre est : %d", extraire_chiffre(nombre, position));

    return EXIT_SUCCESS;
}
//DONE