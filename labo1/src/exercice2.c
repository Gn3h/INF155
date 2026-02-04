#include <stdio.h>
#include <stdlib.h>

#define WATT_TO_CALORIES 0.2388459  // 1 Watt par seconde = 0.2388459 calorie par seconde

int main(void) {
    double nb_watt;
    double nb_calories = 0;

    printf("Veuillez saisir un nombre de Watt: ");
    scanf("%lf", &nb_watt);

    nb_calories = nb_watt * WATT_TO_CALORIES;

    printf("Voici l'equivalent en calorie: %lf.", nb_calories);

    return EXIT_SUCCESS;
}