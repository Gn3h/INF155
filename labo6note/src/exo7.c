#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIGNES 6
#define COLONNES 5
#define MAX_ALEATOIRE 100
#define MIN_ALEATOIRE 40

void remplir_aleatoire2d(int tableau[LIGNES][COLONNES], int nb_lignes, int nb_cols) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_cols; j++) {
            tableau[i][j] = rand() % (MAX_ALEATOIRE - MIN_ALEATOIRE + 1) + MIN_ALEATOIRE;
        } 
    }
}

void afficher_tableau2d(int tableau[LIGNES][COLONNES], int nb_lignes, int nb_cols) {
    for (int i = 0; i < nb_lignes; i++) {
        for (int j = 0; j < nb_cols; j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
}
float moyenne_etudiant(int tableau[LIGNES][COLONNES], int nb_colonnes, int indice_etudiant) {
    float somme_notes_etudiant = 0;
    float moyenne_etudiant = 0;
    for (int j = 0; j < nb_colonnes; j++) {
        somme_notes_etudiant += tableau[indice_etudiant][j];
    }

    moyenne_etudiant = somme_notes_etudiant / nb_colonnes;
    
    return moyenne_etudiant;
}

float moyenne_examen(int tableau[LIGNES][COLONNES], int nb_lignes, int indice_examen) {
    float somme_notes_examen = 0;
    float moyenne_examen = 0;
    for (int i = 0; i < nb_lignes; i++) {
        somme_notes_examen += tableau[i][indice_examen];
    }

    moyenne_examen = somme_notes_examen / nb_lignes;
    
    return moyenne_examen;
}

int etudiant_meilleure_moyenne(int tableau[LIGNES][COLONNES], int nb_lignes, int nb_colonnes) {
    int indice_meilleure_etudiant = 0;
    int meilleure_moyenne = tableau[0][0];
        for (int i = 0; i < nb_lignes; i++) {
            if (moyenne_etudiant(tableau, nb_colonnes, i) > meilleure_moyenne) {
                meilleure_moyenne = moyenne_etudiant(tableau, nb_colonnes, i);
                indice_meilleure_etudiant = i;
            }
        }
    return indice_meilleure_etudiant;
}

int main(void) {
    int tableau[LIGNES][COLONNES] = {{0}};
    int nb_lignes = LIGNES;
    int nb_colonnes = COLONNES;

    srand(time(NULL));

    // Remplir le tableau de notes aleatoire et affichez
    printf("Voici les notes des examens des étudiants : \n");
    remplir_aleatoire2d(tableau, nb_lignes, nb_colonnes);
    afficher_tableau2d(tableau, nb_lignes, nb_colonnes);
    printf("\n");

    // Affiche la moyenne de chaque etudiant
    printf("La moyenne de chaque etudiant (lignes) : \n");
    for (int i = 0; i < nb_lignes; i++) {
        printf("La moyenne de l'etudiant %d : %f\n", i, moyenne_etudiant(tableau, nb_colonnes, i));
    }

    // Affiche la moyenne de chaque examen
    printf("\nLa moyenne de chaque examen (colonnes) : \n");
    for (int j = 0; j < nb_colonnes; j++) {
        printf("La moyenne de l'examen %d : %f\n", j, moyenne_examen(tableau, nb_lignes, j));
    }

    // Affiche l'etudiant avec la meilleur moyenne
    printf("\nL'etudiant avec la meilleure moyenne : \n");
    printf("%d", etudiant_meilleure_moyenne(tableau, nb_lignes, nb_colonnes));

    return EXIT_SUCCESS;
}