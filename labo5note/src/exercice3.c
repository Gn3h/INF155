#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void decaler_gauche(int tableau[], int nb_element) {
    for (int i = 0; i < nb_element; i++) {
        tableau[i] = tableau[i+1];
    }
}

int main(void) {
    int tableau[7] = {0};
    int nb_element = 7;

    srand(time(NULL));

    printf("Tableau original : ");
    for (int i = 0; i < nb_element; i++) {
        tableau[i] = rand() % 20;
        printf("%d, ", tableau[i]);
    }
    
    // Faire 3 fois le décalage. Affichez après chaque décalage
    for (int i = 1; i <= 3; i++) {
        printf("\nTableau décalé %d: ", i);
        decaler_gauche(tableau, nb_element);
        for (int j = 0; j < nb_element; j++) {
            printf("%d, ", tableau[j]);
        }
    }

    return EXIT_SUCCESS;
}
//DONE