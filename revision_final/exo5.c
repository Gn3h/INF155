#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double consommation_totale(double tab_consom[], int nb_zones) {
    double consommation_totale = 0;
    for (int i = 0; i < nb_zones; i++) {
        consommation_totale += tab_consom[i];
    }
    return consommation_totale;
}

int zone_plus_gourmande(double tab_consom[], int nb_zones) {
    double zone_plus_gourmande = 0.0;
    int indice_zone_plus_gourmande = 0;
    for (int i = 0; i < nb_zones; i++) {
        if (tab_consom[i] > zone_plus_gourmande) {
            zone_plus_gourmande = tab_consom[i];
            indice_zone_plus_gourmande = i;
        }
    } 
    
    return indice_zone_plus_gourmande;
}

int main(void) {
    int nb_zones = 12;
    double tab_consom[nb_zones];

    srand(time(NULL));

    for (int i = 0; i < nb_zones; i++) {
        tab_consom[i] = 10.0 + ((double)rand() / RAND_MAX) * (500.0 - 10.0);
        printf("Zone %d : %f\n", i, tab_consom[i]);
    }

    printf("Consommation totale : %f\n", consommation_totale(tab_consom, nb_zones));
    printf("Zone avec la plus grande consommation : %d", zone_plus_gourmande(tab_consom, nb_zones));

    return EXIT_SUCCESS;
}