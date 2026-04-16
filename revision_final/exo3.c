#include <stdio.h>
#include <stdlib.h>

int compter_impulsions(int tab_lecture[], int nombre_lecture) {
    int total_impulsions = 0;
    for (int i = 0; i < nombre_lecture; i++) {
        if (tab_lecture[i] == 1) {
            total_impulsions++;
        }
    }
    return total_impulsions;
}

int main(void) {
    
    int tab_lecture[] = {0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0};
    size_t nombre_lecture = sizeof(tab_lecture) / sizeof(tab_lecture[0]);

    printf("Le nombre total d'impulsions : %d", compter_impulsions(tab_lecture, nombre_lecture));
    

    return EXIT_SUCCESS;
}