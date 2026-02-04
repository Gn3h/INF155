#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Recoit deux bornes (min, max) et saisit un entier au clavier.
// Tant que l'entier n'est pas dans l'intervalle, la fonction affiche
// un message d'erreur et redemande la saisie/
// Retourne la valeur valide obtenue.
int saisir_dans_intervalle(int min, int max) {
    int nombre;
    
    printf("Entrez un nombre entre [%d, %d] : ", min, max);
    scanf("%d", &nombre);

    while (nombre < min || nombre > max) {
        printf("ERREUR! \nVeuillez rentrez un nombre entre [%d, %d] : ", min, max);
        scanf("%d", &nombre);
    }
    return nombre;
}

// 
int compter_essais(void) {
    int nb_essais = 0;
    int min = 1;
    int max = 100;
    int nombre = 0;

    int nombre_alea = (rand() % (max - min + 1)) + min;

    while (nombre_alea != nombre) {
        nombre = saisir_dans_intervalle(min, max);
        if (nombre < nombre_alea) {
            printf("Votre nombre est trop petit!\n");
            nb_essais++;
        }
        else if (nombre > nombre_alea) {
            printf("Votre nombre est trop grand!\n");
            nb_essais++;
        }
    }
    return nb_essais;
}

int main(void) {
    // Test saisir_dans_intervalle
    srand(time(NULL));

    int nb_essaie = compter_essais();

    printf("Vous avez trouve apres %d essais!", nb_essaie);

    return EXIT_SUCCESS;
}