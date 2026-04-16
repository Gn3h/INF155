#include <stdio.h>
#include "strutils.h"

int main() {

    printf("---TEST str_taille---\n");
    char ma_chaine[] = "Bonjour!";
    printf("Taille de la chaine : %d", str_taille(ma_chaine));
    return 0;
}