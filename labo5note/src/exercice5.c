#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int filtrer_pairs(int tableau_src[], int nb_element, int tableau_dest[]) {
    int nb_element_copie = 0;
    int indice_element = 0;
    for (int i = 0; i < nb_element; i++){
        if (tableau_src[i] % 2 == 0) {
            tableau_dest[indice_element] = tableau_src[i];
            nb_element_copie++;
            indice_element++;
        }
    }
    return nb_element_copie;
}

int main(void) {
    int tableau[10] = {0};
    int nb_element = 10;

    srand(time(NULL));

    for (int i = 0; i < nb_element; i++) {
        tableau[i] = rand() % 30;
    }

    printf("Tableau originale : ");
    for (int i = 0; i < nb_element; i++) {
        printf("%d, ", tableau[i]);
    }

    printf("\nTableau avec les valeurs paires seulement : ");
    int tableau_pair[] = {0};
    int nb_element_copie = filtrer_pairs(tableau, nb_element, tableau_pair);
    for (int i = 0; i < nb_element_copie; i++) {
        printf("%d, ", tableau_pair[i]);
    }

    return EXIT_SUCCESS;
}
//DONE