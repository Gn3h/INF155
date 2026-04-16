#include <stdio.h>
#include <stdlib.h>

#define NB_ELEMENT 12

int compter_pics(int tab[], int nb_element) {
    int nb_pics = 0;

    for (int i = 0; i < nb_element; i++) {
        if (tab[i] > tab[i-1] && tab[i] > tab[i+1]) {
            nb_pics++;
        }
    }
    return nb_pics;
}

int main(void) {
    int tab[NB_ELEMENT] = {4, 2, 3, 2, 4, 1, 5, 6, 7, 3, 9, 3};

    printf("Le nombre de pic dans le tableau est : %d", compter_pics(tab, NB_ELEMENT));
    return EXIT_SUCCESS;
}