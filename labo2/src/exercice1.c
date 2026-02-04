#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void) {
    int nombre_de = 1;
    int nombre_aleatoire;

    srand((unsigned int) time(NULL));
    rand();

    while(nombre_de <= 5) {
        nombre_aleatoire = nb_aleatoire(1, 6);
        printf("De #%d : %d \n", nombre_de, nombre_aleatoire);
        nombre_de++;
    }

    // for (int i = 1; i <= 5; i++) {
    //     srand((unsigned int) time(NULL));
    //     rand();
    //     //nb_aleatoire(1, 6);
    //     printf("De #%d : %d \n", i, nb_aleatoire(1, 6));
    // }

    return EXIT_SUCCESS;
}
//DONE