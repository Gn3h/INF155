#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NB_JOURS 5
#define NB_QUARTS 3

int production_jour(int tableau[][NB_QUARTS], int nb_colonnes, int indice_jour) {
    int production_total = 0;

    for (int j = 0; j < nb_colonnes; j++) {
        production_total += tableau[indice_jour][j];
    }
    
    return production_total;
}

int quart_moins_productif(int tableau[][NB_QUARTS], int nb_lignes, int nb_colonnes) {
    int indice_quart_moins_productif = 0;
    int production_min = 0;

    for (int i = 0; i < nb_lignes; i++) {
        production_min += tableau[i][0];
    }
 
    for (int j = 1; j < nb_colonnes; j++) {
        int production_quart = 0;

        for (int i = 0; i < nb_lignes; i++) {
            production_quart += tableau[i][j];
        }

        if (production_quart < production_min) {
            production_min = production_quart;
            indice_quart_moins_productif = j;
        }
    }

    return indice_quart_moins_productif;
}

int main(void) {
    int production[NB_JOURS][NB_QUARTS];

    srand(time(NULL));

    for (int i = 0; i < NB_JOURS; i++) {
        for (int j = 0; j < NB_QUARTS; j++) {
            production[i][j] = 80 + rand() % 71;
        }
    }

    printf("Production de la semaine :\n");
    for (int i = 0; i < NB_JOURS; i++) {
        printf("Jour %d : ", i);

        for (int j = 0; j < NB_QUARTS; j++) {
            printf("%d ", production[i][j]);
        }

        printf("| Total : %d\n", production_jour(production, NB_QUARTS, i));
    }

    printf("Quart le moins productif : %d\n",
           quart_moins_productif(production, NB_JOURS, NB_QUARTS));

    return EXIT_SUCCESS;
}
