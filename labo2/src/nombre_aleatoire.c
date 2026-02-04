
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



/*
 * FONCTION: nb_aleatoire
 * Cette fonction retourne une valeur al�atoire dans l'intervalle entier
   [min, max]. Chaque valeur poss�de la m�me probabilit� d'�tre g�n�r�e.

   PARAM�TRES :
        - min : La plus petite valeur pouvant �tre g�n�r�e (type : int).
        - max : La plus grande valeur pouvant �tre g�n�r�e (type : int).

    VALEUR DE RETOUR : Une valeur se trouvant dans l'intervalle
                       [min, max]  (type : int).	

    ANTECEDENTS :
        - On suppose que la fonction srand a pr�alablement �t� appel�e.
 */
int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void)
{
	int nombre_aleatoire;  /* Re�oit un nombre al�atoire. */
	
	/* On initialise le g�n�rateur de nombres al�atoires. */
	srand((unsigned int)time(NULL));
	rand();

	/* On g�n�re un nombre dans l�intervalle [1, 10]. */
	nombre_aleatoire = nb_aleatoire(1, 10);
	
	/* On affiche le nombre g�n�r�. */
	printf("Nombre : %d\n", nombre_aleatoire);
	
	return EXIT_SUCCESS;
}
		