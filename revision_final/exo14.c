#include <stdio.h>
#include <stdlib.h>

void calculer_correction(double consigne, double valeur_actuelle, double *erreur, double *correction) {
    *erreur = consigne - valeur_actuelle;
    *correction = *erreur * 0.5;
}

int main(void) {
    double consigne;
    double valeur;
    double erreur;
    double correction;

    printf("Saisir la consigne (entre 0 et 3600) : ");
    scanf("%lf", &consigne);

    for (int i = 0; i < 5; i++) {
        printf("Saisir la valeur %d (entre 0 et 3600) : ", i);
        scanf("%lf", &valeur);
        calculer_correction(consigne, valeur, &erreur, &correction);
        printf("L'erreur : %f\n", erreur);
        printf("Correction : %f\n", correction);
    }


    return EXIT_SUCCESS;
}