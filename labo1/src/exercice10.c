#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int vitesse;
    int dimension;
    int viscosite;
    int ecoulement;

    printf("Saisir V (vitesse caractéristique du fluide en m/s): ");
    scanf("%d", &vitesse);
    printf("Saisir L (dimension caractéristique en m): ");
    scanf("%d", &dimension);
    printf("Saisir v (viscosité cinématique du fluide en m^2/s): ");
    scanf("%d", &viscosite);

    ecoulement = (vitesse * dimension) / viscosite;

    if (ecoulement < 2000) {
        printf("L'ecoulement est laminaire");
    }
    else if (ecoulement > 4000) {
        printf("L'ecoulement est turbulant");        
    }
    else {
        printf("L'ecoulement est transitoire");
    }

    return EXIT_SUCCESS;
}