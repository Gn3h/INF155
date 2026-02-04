#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int premier_nb;
    int deuxieme_nb;

    printf("Veuillez rentrez 2 nombres: ");
    scanf("%d", &premier_nb);
    scanf("%d", &deuxieme_nb);

    if (premier_nb < deuxieme_nb) {
        printf("Le plus petit nombre est %d", premier_nb);
    }
    else {
        printf("Le plus petit nombre est %d", deuxieme_nb);
    }
    
    return EXIT_SUCCESS;
}