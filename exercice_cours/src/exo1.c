#include <stdio.h>
#include <stdlib.h>

// Recoit un nombre et une position (0 pour les unites, 1 pour les dizaines, etc.)
// et retourne le chiffre a cette position
int extraire_chiffre(int nombre_4chiffres, int position) {
    for (int i = 0; i < position; i++) {
        nombre_4chiffres /= 10;
    }
    return nombre_4chiffres % 10;
}

int somme_chiffres_4(int nombre_4chifffres) {
    int somme = 0;
    for (int i = 0; i < 4; i++) {
        somme += extraire_chiffre(nombre_4chifffres, i);
    }
    return somme;
}

// Recoit un code a 4 chiffres et retourne 1 si le code est valide,
// 0 sinon. Il est valide si la somme de ses chiffres est divisible par 3.
int code_valide(int nombre_4chiffres) {
    return somme_chiffres_4(nombre_4chiffres) % 3 == 0;
}

int main(void) {
    for (int i = 1000; i <= 1050; i++) {
        if (code_valide(i) == 1) {
            printf("%d est valide.\n", i);
        }
    }
    return EXIT_SUCCESS;
}
//DONE