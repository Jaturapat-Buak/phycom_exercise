#include <stdio.h>

int main() {
    int quack;

    scanf("%d", &quack);

    if (quack == 0) {
        printf("Duck Type: Silent Duck");
    }
    else if (quack >= 1 && quack <= 10) {
        printf("Duck Type: Chill Duck");
    }
    else if (quack >= 11 && quack <= 50) {
        printf("Duck Type: Happy Duck");
    }
    else if (quack > 50) {
        printf("Duck Type: Talkative Duck");
    }
    else {
        printf("Error");
    }

    return 0;
}