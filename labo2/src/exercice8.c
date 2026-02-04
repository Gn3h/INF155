#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int nombre = 0;

    printf("Veuillez rentrer un nombre entre 1 et 100 : ");
    scanf("%d", &nombre);
    
    while ((nombre < 1) || (nombre > 100)) { //Si le nombre entree est plus petit que 1 ou plus grand que 100
        printf("ERREUR!\n");
        printf("Veuillez rentrer un nombre entre 1 et 100 : ");
        scanf("%d", &nombre);
    }

    printf("Bravo! %d est entre 1 et 100.", nombre);

    return EXIT_SUCCESS;
}
//DONE