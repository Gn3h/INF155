#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre1;
    int nombre2;
    int division_entiere = 0;
    int reste_division = 0;

    printf("Veuillez rentrer 2 entiers : \n");
    scanf("%d", &nombre1);
    scanf("%d", &nombre2);
    
    reste_division = nombre1;
    while (reste_division > nombre2) {
        reste_division -= nombre2;
        division_entiere++;
    }

    printf("La division entière (%d/%d) : %d\n", nombre1, nombre2, division_entiere);
    printf("Le reste de la division entière : %d", reste_division);
    return EXIT_SUCCESS;
}
//DONE