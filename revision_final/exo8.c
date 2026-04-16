#include <stdio.h>
#include <stdlib.h>

#define NB_ELEMENTS 10

void lisser_signal(int tab[], int nb_elements, int tab_dest[]) {
    int moyenne = 0;
    for (int i = 0; i < nb_elements; i++) { // premiere et derniere valeurs restent inchangees
        if (i == 0 || i == nb_elements - 1) {
            tab_dest[i] = tab[i];
        } else {
            moyenne = (tab[i-1] + tab[i] + tab[i+1]) / 3;
            tab_dest[i] = moyenne;
        }
        
    }
}

void print_tab(int tab[], int nb_elements) {

    for (int i = 0; i < nb_elements; i++) {
        printf("Element %d : %d\n", i , tab[i]);
    }
}

int main(void) {
    int tab[NB_ELEMENTS] = {1, 2, 3, 2, 5, 2, 7, 4, 9, 10};
    int tab_dest[NB_ELEMENTS] = {};

    lisser_signal(tab, NB_ELEMENTS, tab_dest);

    printf("Signal original : \n");
    print_tab(tab, NB_ELEMENTS);
    
    printf("Signal lisse : \n");
    print_tab(tab_dest, NB_ELEMENTS);

    return EXIT_SUCCESS;
}