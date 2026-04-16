#include <stdio.h>
#include <stdlib.h>

#define NB_CAISSES 6
#define CAPACITE_MAX 500.0

double poids_total(double poids[], int nb_caisses) {
    double poids_total = 0;
    for (int i = 0; i < nb_caisses; i++) {
        poids_total += poids[i];
    }

    return poids_total;
}

int peut_ajouter(double poids[], int nb_caisses, double capacite_max, double poids_nouvelle_caisse) {
    double total = poids_total(poids, nb_caisses); 

    if (total + poids_nouvelle_caisse <= capacite_max) {
        return 1;
    } else {
        return 0;
    }
    
}

int main(void) {
    double poids[NB_CAISSES] = {200.0, 130.2, 54.2, 21.5, 13.5, 40.7};
    double nouvelles_caisse[3] = {5.2, 25.3, 100.6};

    printf("Le poids du convoyeur est de %f kg\n", poids_total(poids, NB_CAISSES));

    for (int i = 0; i < 3; i++) {
        double caisse_ajoute = nouvelles_caisse[i];

        if (peut_ajouter(poids, NB_CAISSES, CAPACITE_MAX, caisse_ajoute)) {
            printf("La caisse de %f peut etre ajoute\n", caisse_ajoute);
        } else {
            printf("La caisse de %f ne peut pas etre ajoute\n", caisse_ajoute);
        }
    }


    return EXIT_SUCCESS;
}