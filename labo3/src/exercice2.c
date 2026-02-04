#include <stdio.h>
#include <stdlib.h>

float prix_apres_taxe(float prix_avant_taxe){
    float TPS = 0.05;
    float TVQ = 0.09975;
    return prix_avant_taxe + (prix_avant_taxe * TPS * TVQ);
}

int main(void) {
    float prix_article;
    float prix_taxe_inclue;
    float total = 0;
    int nombre_article;

    printf("Saisissez le nombre d'articles : ");
    scanf("%d", &nombre_article);

    for (int i = 1; i <= nombre_article; i++) {
        printf("Entrez le prix de votre article : ");
        scanf("%f", &prix_article);
        prix_taxe_inclue = prix_apres_taxe(prix_article);
        printf("Prix apres taxes: %f\n", prix_taxe_inclue);
        total += prix_taxe_inclue;
    }

    printf("Le total a payer : %f", total);

    return EXIT_SUCCESS;
}
//DONE