#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCER 1000000

int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void) {
    int nombre_aleatoire1;
    int nombre_aleatoire2;
    int somme = 0;
    float total = 0.0;
    float probabilite = 0.0;

    srand((unsigned int) time(NULL));
    rand();

    for (int i = 0; i <= (LANCER - 1); i++) {
        nombre_aleatoire1= nb_aleatoire(1, 6);
        nombre_aleatoire2= nb_aleatoire(1, 6);
        somme = nombre_aleatoire1 + nombre_aleatoire2;
        //printf("%d\n", somme);
        if (somme == 7) {
            total++;
            //printf("Total : %f\n", total);
        }
    }

    probabilite = total / LANCER; //Si total est int et que probabilite est float, retourne toujours 0
    printf("La probabilite d'obtenir 7 en additionnant le resultat de 2 des est : %f", probabilite); 

    //nombre de resultat possible pour 2 des (6*6 = 36), nombre de combinaison possible pour obtenir 7 = (6)
    //probabilite = nombre de combinaison possible / nombre de resultat possible = 6 / 36 = 1 / 6 = 0.166
    return EXIT_SUCCESS;
}
//DONE