// Écrire une fonction qui affiche dans la console l'ensemble des nombres parfaits entre 0 et un nombre n fournit en paramètre. 

// Un nombre est dit parfait si la somme de se diviseurs (autre que lui même) est égale au nombre lui même. Par exemple, 6 est nombre parfait car les diviseurs de 6 sont 1, 2 et 3 ; et 1+2+3 = 6. 

// Pour traiter ce problème, vous devez subdiviser votre problème en sous-problèmes et resoudre chacun des sous-problèmes par une fonction.

#include <stdio.h>
#include <stdlib.h>

// Somme des diviseurs de n sauf lui-meme.
// @param n : nombre dont on veut sa somme de diviseurs
// @return somme : La somme des diviseurs 
int somme_diviseurs(int n) {
    int somme = 0;
    for (int i = 1; i < n ; i++) {
        if (n % i == 0) {
            somme += i;
        }
    }
    return somme;
}

// Vérifie si le nombre est un nombre parfait.
// @param n : nombre dont on veut savoir s'il est parfait
// @return 1 : si VRAI, 0 : si FAUX
int nombres_parfait(int n) {
    if (n == 1) {
        return 1;
    }
    else if (somme_diviseurs(n) == n) {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void) {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (int i = 1; i <= nombre; i++){
        if (nombres_parfait(i) == 1) {
            printf("%d est un nombre parfait\n", i);
        }
    }

    return EXIT_SUCCESS;
}
//DONE