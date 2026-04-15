#include <stdio.h>
#include <stdlib.h>

void fonction_fictive1(int param1);
void fonction_fictive2(int param1);

int main(void)
{
   fonction_fictive1(7);
   fonction_fictive2(11);

   return EXIT_SUCCESS;
}

void fonction_fictive1(int param1)
{
   int x;
   x = param1;
   /* AFFICHEZ L'ADRESSE DE x ICI*/
   printf("Adresse de x : %p\n", &x);
}
void fonction_fictive2(int param1)
{
   int y;
   y = param1;
   /* AFFICHEZ l'ADRESSE DE Y ICI */
   printf("Adresse de y : %p", &y);
}