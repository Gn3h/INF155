
/****************************************************************************************
Auteur  : Anis Boubaker
Date    : 17 janvier 2018
Fichier : exercice3.c

Ce programme calcule la probabilit� d'obtenir chacune des valeurs possibles lors du lanc� 
de deux d�s.
La probabilit� est bas�e sur le lanc� des deux d�s un nombre �lev�s de fois (MAX_LANCES).

*****************************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>



/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/
#define MAX_LANCES 5000000

/***************************************************************************************
*                              PROTOTYPES DE FONCTIONS                                  *
***************************************************************************************/
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
int nb_aleatoire(int min, int max);


/****************************************************************************************
*                           D�FINTION DU PRGORAMME PRINCIPAL                           *
****************************************************************************************/


int main(void)
{
	unsigned int nb_occurences; //Comptabilise le nombre de fois qu'un VAL_MESUREE a �t� obtenu
	int compteur_lances; //compteur de lanc�s
	int valeur_mesuree; //Itere sur toutes les valeurs possibles qu'on obtient avec 2 d�s
	float probabilite; //La probabilit� d'obtenir 
	float somme_probabilites=0; //Somme toutes le probabilit�s obtenues

					   //Initialisation du moteur de nombres al�atoires avant d'appeler nb_aleatoire
	srand((unsigned int)time(NULL));

	valeur_mesuree = 2;
	while (valeur_mesuree <= 12) {
		//On lance le d� MAX_LANCES fois et on retient la somme
		compteur_lances = 0;
		nb_occurences = 0;
		while (compteur_lances < MAX_LANCES)
		{
			if (nb_aleatoire(1, 6) + nb_aleatoire(1, 6) == valeur_mesuree)
			{
				nb_occurences++;
			}
			compteur_lances++;
		}

		//On calcule et affiche la probabilit�
		probabilite = (float)nb_occurences / MAX_LANCES;
		somme_probabilites += probabilite;

		printf("La probabilite estimee d'obtenir la valeur %d est de %f\n", valeur_mesuree, probabilite);
		valeur_mesuree++;
	}

	printf("\nLa somme des probabilites obtenues est de: %f\n\n", somme_probabilites);

	return EXIT_SUCCESS;
}

/****************************************************************************************
*                           D�FINTION DES FONCTIONS                                     *
****************************************************************************************/

int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}