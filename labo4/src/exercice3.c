#include <stdio.h>
#include <stdlib.h>

int jour_de_semaine(int jour, int mois, int annee) {
    if (mois >= 3) {
        return ((23 * mois)/9 + jour + 4 + annee + annee/4 - annee/100 + annee/400 -2) % 7;
    }
    else {
        return ((23 * mois)/9 + jour + 4 + annee + (annee - 1)/4 - (annee - 1)/100 + (annee - 1)/400) % 7;
    }
}

int main(void) {
    int jour = 0;
    int mois = 0;
    int annee = 0;

    printf("Veuillez rentrer le jour : ");
    scanf("%d", &jour);
    printf("Veuillez rentrer le mois : ");
    scanf("%d", &mois);
    printf("Veuillez rentrer l'annee : ");
    scanf("%d", &annee);

    if (jour_de_semaine(jour, mois, annee) == 0) {
        printf("Cette date correspond a un dimanche!"); 
    }
    if (jour_de_semaine(jour, mois, annee) == 1) {
        printf("Cette date correspond a un lundi!"); 
    }
    if (jour_de_semaine(jour, mois, annee) == 2) {
        printf("Cette date correspond a un mardi!"); 
    }
    if (jour_de_semaine(jour, mois, annee) == 3) {
        printf("Cette date correspond a un mercredi!"); 
    }
    if (jour_de_semaine(jour, mois, annee) == 4) {
        printf("Cette date correspond a un jeudi!"); 
    }
    if (jour_de_semaine(jour, mois, annee) == 5) {
        printf("Cette date correspond a un vendredi!"); 
    }
    if (jour_de_semaine(jour, mois, annee) == 6) {
        printf("Cette date correspond a un samedi!"); 
    }

    return EXIT_SUCCESS;
}
//DONE