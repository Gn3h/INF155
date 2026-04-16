#include <stdio.h>
#include <stdlib.h>

#define NB_BACS 8

int bac_present(int codes[], int nb_bacs, int code_recherche) {
    for (int i = 0; i < nb_bacs; i++) {
        if (codes[i] == code_recherche) {
            return 1;
        }
    }

    return 0;
}

int position_bac(int codes[], int nb_bacs, int code_recherche) {
    for (int i = 0; i < nb_bacs; i++) {
        if (codes[i] == code_recherche) {
            return i;
        }
    }

    return -1;
}

int main(void) {
    int codes[NB_BACS] = {104, 208, 315, 422, 509, 610, 721, 834};
    int codes_recherches[3] = {315, 999, 610};

    for (int i = 0; i < 3; i++) {
        int code = codes_recherches[i];

        if (bac_present(codes, NB_BACS, code)) {
            printf("Le bac %d est present a l'indice %d.\n",
                   code,
                   position_bac(codes, NB_BACS, code));
        } else {
            printf("Le bac %d est absent.\n", code);
        }
    }

    return EXIT_SUCCESS;
}
