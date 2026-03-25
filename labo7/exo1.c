#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int var_entiere = 0;
    double var_double;

    printf("L'adresse de var_entiere est %p\n", &var_entiere);
    printf("La taille de var_entiere est de taille : %d\n", sizeof(var_entiere));
    printf("L'adresse de var_double est %p\n", &var_double);
    printf("La taille de var_double est de taille : %d\n", sizeof(var_double));

    return EXIT_SUCCESS;
}