#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int indice_minimum(int tableau[], int nb_element) {
    int min = tableau[0];
    int indice_min = 0;
    for (int i = 1; i < nb_element; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
            indice_min = i;
        }
    }
    return indice_min;
}

int indice_maximum(int tableau[], int nb_element) {
    int max = tableau[0];
    int indice_max = 0;
    for (int i = 1; i < nb_element; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
            indice_max = i;
        }
    }
    return indice_max;
}

float moyenne_sans_extremes(int tableau[], int nb_element) {
    float somme = 0;
    float moyenne = 0;
    
    for (int i = 0; i < nb_element ; i++) {
        somme += tableau[i];
    }
    int indice_max = indice_maximum(tableau, nb_element);
    int indice_min = indice_minimum(tableau, nb_element);

    somme = somme - tableau[indice_max] - tableau[indice_min];

    moyenne = somme / (nb_element - 2);

    return moyenne;
}

int main(void) {
    int tableau[10] = {0};
    int nb_element = 10;

    srand(time(NULL));

    for (int i = 0; i < nb_element; i++) {
        tableau[i] = rand() % (100 + 1 - 50) + 50;
    }

    printf("Voici tous les notes : ");
    for (int i = 0; i < nb_element; i++) {
        printf("%d, ", tableau[i]);
    }

    printf("\nLa note la plus basse : ");
    printf("%d, ", tableau[indice_minimum(tableau, nb_element)]);

    printf("\nLa note la plus haute : ");
    printf("%d, ", tableau[indice_maximum(tableau, nb_element)]);

    printf("\nLa moyenne final : %f", moyenne_sans_extremes(tableau, nb_element));

    return EXIT_SUCCESS;
}
//DONE