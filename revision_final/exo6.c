#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compter_alertes(int tableau_mesure[], int nb_mesure) {
    int nb_alerte = 0;
    for (int i = 0; i < nb_mesure; i++) {
        if (tableau_mesure[i] > 80) {
            nb_alerte++;
        } 
    }
    return nb_alerte;
}

int premiere_alerte(int tableau_mesure[], int nb_mesure) {
    for (int i = 0; i < nb_mesure; i++) {
        if (tableau_mesure[i] > 80) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int nb_mesure = 15;
    int tableau_mesure[nb_mesure];
    
    srand(time(NULL));

    for (int i = 0; i < nb_mesure; i++) {
        tableau_mesure[i] = rand() % (100 + 100 + 1) - 100;
        printf("Mesure %d : %d\n", i, tableau_mesure[i]);
    }

    printf("Nombre d'alertes : %d\n", compter_alertes(tableau_mesure, nb_mesure));
    printf("Indice premiere alerte : %d", premiere_alerte(tableau_mesure, nb_mesure));

    return EXIT_SUCCESS;
}