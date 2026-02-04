#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// (log{a}(x) = ln(x)/ln(a).
double log_b(double n, int b) {
    return log(n)/log(b);
}

int main(void) {
    double n;
    int b;
    
    printf("Entrez le nombre n dont on veut calculer le logarithme : ");
    scanf("%lf", &n);
    printf("Entrez la base b du logarithme : ");
    scanf("%d", &b);

    printf("Voici le log(%lf) en base %d : %lf", n, b, log_b(n, b));
    
    return EXIT_SUCCESS;
}
//DONE