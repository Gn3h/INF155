#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int trouver_maximum(int tableau[], int nb_element) {
    int max = tableau[0];
    for (int i = 1; i < nb_element; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    return max;
}

int trouver_minimum(int tableau[], int nb_element) {
    int min = tableau[0];
    for (int i = 1; i < nb_element; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }
    return min;
}

int main(void) {
    srand(time(NULL));

    int tableau[10] = {0};
    int nb_element = 10;

    for (int i = 0; i < 10; i++) {
        tableau[i] = rand() % 100;
        printf("%d, ", tableau[i]);
    }

    printf("\nLa valeur maximal dans ce tableau : %d\n", trouver_maximum(tableau, nb_element));
    printf("La valeur minimale dans ce tableau : %d\n", trouver_minimum(tableau, nb_element));

    return EXIT_SUCCESS;
}
//DONE