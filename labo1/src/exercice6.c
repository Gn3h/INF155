#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int nb_etudiant;
    int taille_equipe;
    int nb_equipe = 0;
    int eleve_surplus = 0;

    printf("Entrez le nombre d'etudiant : ");
    scanf("%d", &nb_etudiant);
    printf("Entrez la taille d'equipe : ");
    scanf("%d", &taille_equipe);

    nb_equipe = nb_etudiant / taille_equipe;
    eleve_surplus = nb_etudiant % taille_equipe;

    printf("Nombre d'equipe selon la taille : %d\n", nb_equipe);
    printf("Nombre d'etudiant en surplus : %d", eleve_surplus);

    return EXIT_SUCCESS;
}