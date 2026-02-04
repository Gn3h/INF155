#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCER 1000000

int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void) {
    int nombre_aleatoire;
    int moyenne = 0;
    int total = 0;

    srand((unsigned int) time(NULL));
    rand();

    for (int i = 0; i <= (LANCER - 1); i++) {
        nombre_aleatoire= nb_aleatoire(1, 6);
        total = total + nombre_aleatoire;
        moyenne = total / LANCER;
        printf("%d\n", total); // Verification que le total augmente avec des chiffres aleatoire

    }
    
    printf("La moyenne des lancers : %d", moyenne); //Devrait etre de 3,5 selon une recherche internet

    return EXIT_SUCCESS;
}
//DONE