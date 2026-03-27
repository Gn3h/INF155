#include <stdio.h>
#include <stdlib.h>

int main(void) {\
  int valeur_saisie;
  int *pointeur_valeur;

  pointeur_valeur = &valeur_saisie;
  
  printf("Saisir une valeur : ");
  scanf("%d", &valeur_saisie);
  
  *pointeur_valeur *= 2;
  
  printf("Cette valeur multiplier par 2 = %d", valeur_saisie);
  return EXIT_SUCCESS;
}
