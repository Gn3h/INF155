#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculer_montant(float capital_init, float taux_interet_annuel, int nombre_annee) {
    float montant_accumule = 0;
    float taux_accumule = 0;
    taux_accumule = 1 + taux_interet_annuel/100;
    return capital_init * pow(taux_accumule, nombre_annee);
}

int main(void) {
    float capital_init = 0;
    float taux_interet = 0;
    float montant = 0;

    printf("Saisissez le capital initial : ");
    scanf("%f", &capital_init);
    printf("Saisissez le taux d'interet : ");
    scanf("%f", &taux_interet);

    for (int nombre_annee = 1; nombre_annee <= 10; nombre_annee++) {
        montant = calculer_montant(capital_init, taux_interet, nombre_annee);
        printf("Apres %d ans, vous avez accumule %f\n", nombre_annee, montant);
    }

    return EXIT_SUCCESS;
}
//DONE