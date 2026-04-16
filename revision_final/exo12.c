#include <stdio.h>
#include <stdlib.h>

void echanger(int *ptr1, int *ptr2) {
    int copie;
    copie = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = copie;
}

void ordonner_deux(int *ptr1, int *ptr2) {
    if (*ptr1 > *ptr2) {
        echanger(ptr1, ptr2);
    }
}

int main(void) {
    int entier1 = 20;
    int entier2 = 10;
    
    printf("Valeurs initiales : %d, %d\n", entier1, entier2);

    ordonner_deux(&entier1, &entier2);

    printf("Valeurs reordonnees : %d, %d\n", entier1, entier2);

    return EXIT_SUCCESS;
}