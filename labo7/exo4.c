#include <stdio.h>
#include <stdlib.h>

void permuter(int *entier1, int *entier2){
  int copie_entier;
  copie_entier = *entier1;
  *entier1 = *entier2;
  *entier2 = copie_entier;
}

void permuter2(int entier1, int entier2) {
  int copie_entier;
  copie_entier = entier1;
  entier1 = entier2;
  entier2 = copie_entier;
}

int main(void) {
  int entier1;
  int entier2;

  printf("Saisir entier1 : ");
  scanf("%d", &entier1);
  printf("Saisir entier2 : ");
  scanf("%d", &entier2);

  permuter(&entier1, &entier2);
  
  printf("Valeur entier1 : %d\n", entier1);
  printf("Valeur entier2 : %d\n", entier2);

  // permuter2 ne fait aucun changement
  permuter2(entier1, entier2);

  printf("Valeur entier1 : %d\n", entier1);
  printf("Valeur entier2 : %d\n", entier2);
  return EXIT_SUCCESS;
}
