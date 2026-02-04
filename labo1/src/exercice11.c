#include <stdio.h>
#include <stdlib.h>

#define CIMENT_PAR_M3 350
#define SABLE_PAR_M3 680
#define GRAVIER_PAR_M3 1175

int main(void) {
    double ciment;
    double sable;
    double gravier;
    double beton;

    // Pour 1m3 de beton, il faut 350kg de ciment, 680kg de sable et 1175kg de gravier.
    printf("Entrez la quantite de ciment (en kg): ");
    scanf("%lf", &ciment);
    printf("Entrez la quantite de sable (en kg): ");
    scanf("%lf", &sable);
    printf("Entrez la quantite de gravier (en kg): ");
    scanf("%lf", &gravier);

    if (ciment/CIMENT_PAR_M3 < sable/SABLE_PAR_M3) {
        if (ciment/CIMENT_PAR_M3 < gravier/GRAVIER_PAR_M3) {
            beton = ciment/CIMENT_PAR_M3;
        }
        else {
            beton = gravier/GRAVIER_PAR_M3;
        }
    }   
    else {
        if (sable/SABLE_PAR_M3 < gravier/GRAVIER_PAR_M3) {
            beton = sable/SABLE_PAR_M3;
        }
        else {
            beton = gravier/GRAVIER_PAR_M3;
        }
    }

    printf("Le volume maximal de beton que l'on peut produire est: %lf m^3.", beton);

    return EXIT_SUCCESS;
}