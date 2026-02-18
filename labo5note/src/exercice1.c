#include <stdio.h>
#include <stdlib.h>

float somme_tableau(int tableau[], int nb_element) {
    float somme = 0;
    for (int i = 0; i < nb_element; i++) {
        somme += tableau[i];
    }
    return somme;
}

float moyenne_tableau(int tableau[], int nb_element) {
    return somme_tableau(tableau, nb_element) / nb_element;
}

int main(void) {
    int nb_element = 8;
    int tableau[8] = {0};

    printf("Entrez 8 entiers : ");
    
    for (int i = 0; i < nb_element; i++ ) {
        scanf("%d", &tableau[i]);
    }

    printf("La somme de ces entiers est : %d\n", somme_tableau(tableau, nb_element));
    printf("La moyenne de ces entiers est : %f", moyenne_tableau(tableau, nb_element));
    return EXIT_SUCCESS;
}
//DONE