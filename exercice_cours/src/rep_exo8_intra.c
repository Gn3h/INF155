// Écrivez une fonction fusionner_tableaux qui reçoit deux tableaux triés en ordre croissant
// (avec leurs nombres d'éléments respectifs) 
// et un tableau destination. La fonction copie tous les éléments des deux tableaux sources
//  dans le tableau destination, en maintenant l'ordre croissant. 
// Elle retourne le nombre total d'éléments dans le tableau destination.

#include <stdio.h>
#include <stdlib.h>

int fusionner_tableaux(int tableau1[], int nb_element1, int tableau2[], int nb_element2, int tableau_dest[]) {
    int pos1 = 0;
    int pos2 = 0;
    int pos3 = 0;

    while (pos1 < nb_element1 && pos2 < nb_element2) {
        if (tableau1[pos1] < tableau2[pos2]) {
            tableau_dest[pos3] = tableau1[pos1];
            pos1++;
        }
        else {
            tableau_dest[pos3] = tableau2[pos2];
            pos2++;
        }
        pos3++;
    }

    // Copier le reste du tableau 1
    while (pos1 < nb_element1) {
        tableau_dest[pos3] = tableau1[pos1];
        pos1++;
        pos3++; 
    }

    // Copier le reste du tableau 2
    while (pos2 < nb_element2) {
        tableau_dest[pos3] = tableau2[pos2];
        pos2++;
        pos3++;
    }
    return pos3;
}

int main(void) {

    
    
    return EXIT_SUCCESS;
}