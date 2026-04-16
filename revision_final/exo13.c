#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LONGUEUR 4
#define LARGEUR 4

double pression_moyenne(double grille[LONGUEUR][LARGEUR], int longueur, int largeur) {
    double somme = 0;
    for (int i = 0 ; i < longueur; i++) {
        for (int j = 0; j < largeur; j++) {
            somme += grille[i][j];
        }
    }
    double moyenne = somme / (longueur * largeur);
    return moyenne;
}

int capteur_defaillant(double grille[LONGUEUR][LARGEUR], int longueur, int largeur) {
    for (int i = 0 ; i < longueur; i++) {
        for (int j = 0; j < largeur; j++) {
            if (grille[i][j] == 0) {
                return 1;
            }
        }
    }
    return 0;
}

int main(void) {
    double grille[LONGUEUR][LARGEUR];
    srand(time(NULL));
    
    for (int i = 0 ; i < LONGUEUR; i++) {
        for (int j = 0; j < LARGEUR; j++) {
            grille[i][j] = rand() % (1000 - 0 + 1) + 100;
            printf("%f\n", grille[i][j]);
        }
    }


    printf("Pression moyenne : %f\n", pression_moyenne(grille, LONGUEUR, LARGEUR));
    
    if (capteur_defaillant(grille, LONGUEUR, LARGEUR)) {
        printf("Presence capteur defaillant.\n");
    } else {
        printf("Aucun capteur defaillant.\n");
    }

    return EXIT_SUCCESS;
}