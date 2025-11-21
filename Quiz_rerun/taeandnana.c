#include <stdio.h>

int main() {
    int game, time = 0, de = 2800;
    double na = 2800;
    scanf("%d", &game);

    if ((game%2) != 0) {
        game--;
    }

    for (int i = 0; i < game; i++) {
        time += 30;
    }

    for (int i = 0; i < (time/60); i++) {
        na -= (na*2)/100;
    }

    printf("%.2lf\n", (de - na));
    if ((time/60) > 15) {
        printf("Danger");
    }
    else {
        printf("Safe");
    }
}
