#include <stdio.h>
#include <stdlib.h>

// Retourne le n-ieme terme de la suite de Fibonnaci
// @param n le numero du terme
// @return la valeur correspondante dans la suite de Fibonnaci
double fibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // return fibo(n-2) + fibo(n-1);
    double n_moins_un = 1;
    double n_moins_deux = 0;
    double somme = 0;

    for (int i = 2; i <= n; i++) {
        somme = n_moins_deux + n_moins_un;
        n_moins_deux = n_moins_un;
        n_moins_un = somme;
    }
    return somme;
}

int main(void) {
    int terme;
    double fibonnaci[100];

    for (int i = 0; i < 100; i++) {
        fibonnaci[i] = fibo(i);
        printf("Le terme %d donne : %.0lf\n", i, fibonnaci[i]);
    }

    // printf("Entrez le n-ieme terme : ");
    // scanf("%d", &terme);

    // printf("%d-ieme terme de Fibonnaci : %.0lf\n", terme, fibo(terme));
    return EXIT_SUCCESS;
}