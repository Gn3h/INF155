#include <stdio.h>
#include <stdlib.h>

void echanger(int tableau[], int indice1, int indice2) {
    int temp = tableau[indice1];
    tableau[indice1] = tableau[indice2];
    tableau[indice2] = temp;
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

void deplacer_max_fin(int tableau[], int nb_element) {
    echanger(tableau, nb_element - 1, indice_maximum(tableau, nb_element));
}


int main(void) {
    int tableau[8] = {0};
    int nb_element = 8;

    printf("Entrez 8 entiers : ");
    for (int i = 0; i < nb_element; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Tableau original : ");
    for (int i = 0; i < nb_element; i++) {
        printf("%d, ", tableau[i]);
    }

    printf("\nTableau modifié : ");
    deplacer_max_fin(tableau, nb_element);
    for (int i = 0; i < nb_element; i++) {
        printf("%d, ", tableau[i]);
    }
    return EXIT_SUCCESS;
}
//DONE