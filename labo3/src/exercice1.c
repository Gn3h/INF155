#include <stdio.h>
#include <stdlib.h>


int cube(int nombre) {
    return nombre * nombre * nombre;
}

int main(void) {
    int nombre_au_cube = 0;
    
    for (int i = 1; i <= 10; i++){
        nombre_au_cube = cube(i);
        printf("Le nombre %d au cube est : %d\n", i, nombre_au_cube);
    }

    return EXIT_SUCCESS;
}
//DONE