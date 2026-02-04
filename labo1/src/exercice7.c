#include <stdio.h>
#include <stdlib.h>

#define PENNYSTOSHILLINGS 12
#define SHILLINGSTOLIVRES 20

int main(void) {
    int pennys;
    int shillings = 0;
    int livres = 0;
    int pennys_restant_shilling;
    int pennys_restant_livres;
    int pennys_to_livres;
    // int max_livres;
    // int max_shillings;
    // int pennys_restant;

    printf("Saisir le nombre de pennys: ");
    scanf("%d", &pennys);

    shillings = pennys / PENNYSTOSHILLINGS;
    livres = shillings / SHILLINGSTOLIVRES;

    pennys_restant_shilling = pennys % PENNYSTOSHILLINGS;
    pennys_to_livres = PENNYSTOSHILLINGS * SHILLINGSTOLIVRES;
    pennys_restant_livres = pennys % (pennys_to_livres);

    printf("Pour %d pennys, vous pouvez avoir un maximum de %d livres avec un restant de %d pennys \n", pennys, livres, pennys_restant_livres);
    printf("Pour %d pennys, vous pouvez avoir un maximum de %d shillings avec un restant de %d pennys \n", pennys, shillings, pennys_restant_shilling);
    //printf("Pour %d pennys, vous pouvez avoir un maximum de %d livres, %d shillings et un restant de %d pennys \n", pennys, max_livres, max_shillings, pennys_restant);
    
    return EXIT_SUCCESS;
}