#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int nb_detections = 0;

int detecter_collision(void) {
    nb_detections++;

    return rand() % 2;
}

int obtenir_nb_detections(void) {
    return nb_detections;
}

int main(void) {
    int nb_collisions = 0;

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        int collision = detecter_collision();

        if (collision == 1) {
            nb_collisions++;
        }

        printf("Detection %d : %d\n", i + 1, collision);
    }

    printf("Nombre total d'appels : %d\n", obtenir_nb_detections());
    printf("Nombre de collisions detectees : %d\n", nb_collisions);

    return EXIT_SUCCESS;
}
