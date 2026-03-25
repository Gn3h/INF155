#include <stdio.h>
#include <stdlib.h>

void afficher_adresse(int var_entiere){
    printf("%p", &var_entiere);
}

int main(void) {
    int ma_var;
    printf("%p\n", &ma_var);
    afficher_adresse(ma_var); // Les adresses sont différents;

    return EXIT_SUCCESS;
}