#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre1;
    int nombre2;
    int produit = 1;

    printf("Veuillez rentrer 2 entiers : \n");
    scanf("%d", &nombre1);
    scanf("%d", &nombre2);

    for (int i = nombre1; i <= nombre2; i++) {
        produit *= i;
    }

    printf("Le produit de tous les nombres entiers dans l'intervalle [%d, %d] est : %d", nombre1, nombre2, produit);
    return EXIT_SUCCESS;
}
//DONE