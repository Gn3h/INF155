#include <stdio.h>
#include <stdlib.h>

int est_premier(int nombre) {
    if (nombre <= 1) {
        return 0;
    }

    for (int j = 2; j <= nombre/2; j++) { // nombre/2 car impossible d'avoir un diviseur plus grand que la moitie du nombre
        if (nombre % j == 0) {
            return 0; //pas premier
        }
    }
    return 1; //Sort de la boucle sans trouver, alors premier
}

int main(void) {
    int n = 0;
    printf("Saisissez un entier n : ");
    scanf("%d", &n);

    printf("Voici tous les nombres premier inferieurs ou egaux a n : \n");
    for (int i = 2; i <= n; i++) {
        if (est_premier(i) == 1) {
            printf("%d\n", i);
        }
    }

    return EXIT_SUCCESS;
}
//DONE