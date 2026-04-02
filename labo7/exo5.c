#include <stdio.h>
#include <stdlib.h>

void min_max_saisie(int nombre_valeurs, int *min, int *max) {
    int valeur;
    for (int i = 0; i < nombre_valeurs; i++) {
        printf("Saisir une valeur : ");
        scanf("%d", &valeur);
        if (i == 0) {
            *min = valeur;
            *max = valeur;
        } else {
            if (valeur < *min) {
                *min = valeur;
            }
            if (valeur > *max) {
                *max = valeur;
            }
        }
    }
} 

int main(void) {
    int min = 0;
    int max = 0;
    int nombre_valeurs;

    printf("Saisir le nombre de valeurs : ");
    scanf("%d", &nombre_valeurs);
    
    min_max_saisie(nombre_valeurs, &min, &max);
    
    printf("Valeur minimale : %d\n", min);
    printf("Valeur maximale : %d\n", max);
    return EXIT_SUCCESS;
}