#include <stdio.h>
#include <stdlib.h>

float temperature_moyenne(float tableau[], int nb_element) {
    float moyenne_temp = 0;
    float somme = 0;
    for (int i = 0; i < nb_element; i++) {
        somme += tableau[i];
    }
    moyenne_temp = somme / nb_element;

    return moyenne_temp;
}

int jours_au_dessus_moyenne(float tableau[], int nb_element) {
    int nombre_de_jour = 0;
    for (int i = 0; i < nb_element; i++) {
        if (tableau[i] > temperature_moyenne(tableau, nb_element)) {
            nombre_de_jour ++;
        }
    }
    return nombre_de_jour;
}

int main(void) {
    float temperature[7] = {0};
    int nb_element = 7;

    printf("Entrez les 7 températures : ");
    for (int i = 0; i < nb_element; i++) {
        scanf("%f", &temperature[i]);
    }

    printf("Voici la moyenne de la température cette semaine : %f", temperature_moyenne(temperature, nb_element));
    printf("\nLe nombre de jour au dessus de la moyenne : %d", jours_au_dessus_moyenne(temperature, nb_element));

    return EXIT_SUCCESS;
}