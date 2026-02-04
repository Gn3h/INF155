#include <stdio.h>
#include <stdlib.h>

int saisir_positif(void) { //Ecrire 'void' si la fonction ne prend aucun parametre
    int nombre_positif = 0;
    // printf("Veuillez rentrer un entier positif : ");
    // scanf("%d", &nombre_positif);
    // if (nombre_positif < 0) {
    //     printf("Veuillez rentrer un entier positif: ");
    //     scanf("%d", &nombre_positif);
    // }
    // else {
    //     return nombre_positif;
    // }
    do { // On evite la repetition du code printf et scanf
        printf("Veuillez rentrer un entier positif: ");
        scanf("%d", &nombre_positif);
    }
    while (nombre_positif <= 0);
}

int main(void) {
    int nombre_de_saisi = 0;
    int resultat = 0;

    while (nombre_de_saisi < 5) {
        resultat += saisir_positif();
        nombre_de_saisi++;
    }
    printf("La somme des 5 nombres positifs est : %d", resultat);
    return EXIT_SUCCESS;
}
//DONE