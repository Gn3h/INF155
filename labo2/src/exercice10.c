/****************************************************************************************
Auteur  : Anis Boubaker
Date    : 17 janvier 2018
Fichier : exercice8.c

Programme qui estime la valeur de pi via le produit des termes de la suite de Wallis. La 
pr�cision du calcul d�pend du nombre de termes (MAX_TERMES) de la suite consid�r�s.

*****************************************************************************************/
#include <stdlib.h>
#include <stdio.h>



/****************************************************************************************
*                               D�FINTION DES CONSTANTES                                *
****************************************************************************************/
#define MAX_TERMES 1000000000 //Nombre maximal de termes de la suite de Wallis.

/****************************************************************************************
*                           D�FINTION DU PRGORAMME PRINCIPAL                           *
****************************************************************************************/


int main(void)
{
	double pi=1; //Valeur de pi.
	double k; //compteur de boucle : repr�sente le terme de la suite consid�r� � chaque it�ration.
	
	//Calcul du produit des MAX_TERMES termes de la suite de Wallis
	k = 0;
	while (k < MAX_TERMES)
	{
		pi *= ((2 * k + 2) / (2 * k + 1)) * ((2 * k + 2) / (2 * k + 3)); //on calcule pi/2
		k++;
	}
	pi = pi * 2; //On multiplie la valeur de pi/2 par 2 pour obtenir la valeur de pi.

	printf("pi=%.50lf\n", pi);
	printf("Approximation basee sur le produit de %d termes de la suite de Wallis.\n\n", MAX_TERMES);

	return EXIT_SUCCESS;
}
