#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre;
    int diviseurs;

    printf("Veuillez rentrer 1 entier : ");
    scanf("%d", &nombre);

    for (int i = 1; i <= nombre; i++) {
        if ((nombre % i) == 0) {
            printf("%d est un diviseurs de %d\n", i, nombre);
        }
    }

    //printf("Voici tous les diviseurs de %d : %d", nombre, diviseurs);
    return EXIT_SUCCESS;
}
//DONE