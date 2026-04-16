#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nb_mesure;
    double *valeurs = malloc(nb_mesure * sizeof(double));
    double somme = 0;
    double moyenne = 0;

    printf("Saisir le nombre de mesure : ");
    scanf("%d", &nb_mesure);

    for (int i = 0; i < nb_mesure; i++) {
        printf("Saisir la valeur %d : ", i);
        scanf("%lf", &valeurs[i]);
        somme += valeurs[i];
    }

    moyenne = somme / nb_mesure;

    printf("La moyenne est : %f", moyenne);

    free(valeurs);

    return EXIT_SUCCESS;
}