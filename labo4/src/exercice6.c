#include <stdio.h>
#include <stdlib.h>

int nombre_de_chiffre(int nombre) {
    int compteur = 0;
    while (nombre != 0) {
        nombre /= 10;
        compteur++;
    }
    return compteur;
}

int extraire_chiffre(int nombre, int position) {
    for (int i = 1; i < position; i++) {
        nombre /= 10;
    }
    return nombre % 10;
}

int somme_des_chiffres(int nombre) {
    int somme = 0;
    for (int i = 1; i <= nombre_de_chiffre(nombre); i++) {
        somme += extraire_chiffre(nombre, i);
    }
    return somme;
}

int main(void) {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    printf("La somme de ces chiffres est : %d", somme_des_chiffres(nombre));
    return EXIT_SUCCESS;
}
//DONE