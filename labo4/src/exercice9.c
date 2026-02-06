#include <stdio.h>
#include <stdlib.h>

int pgcd(int nombre1, int nombre2) {
    int plus_petit_nombre = 0;
    int pgcd = 0;
    if (nombre1 < nombre2) {
        plus_petit_nombre = nombre1;
    }
    else {
        plus_petit_nombre = nombre2;
    }
    
    for (int i = 1; i <= plus_petit_nombre; i++) {
        if ((nombre1 % i == 0) && (nombre2 % i == 0)) {
            pgcd = i;
        }
    }
    return pgcd;
}

int main(void) {
    int nombre1 = 0;
    int nombre2 = 0;
    printf("Entrez 2 nombres : ");
    scanf("%d", &nombre1);
    scanf("%d", &nombre2);

    printf("Le PGCD de ces deux nombres est : %d", pgcd(nombre1, nombre2));

    return EXIT_SUCCESS;
}
//DONE