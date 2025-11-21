#include <stdio.h>

int main() {
    int safe, lap, sc_lap, err = 0;
    float distance;

    scanf("%d\n%f\n%d\n%d", &safe, &distance, &lap, &sc_lap);

    int sc_run = lap - (sc_lap - 1);
    if (safe == 1 && (distance < 1 && (lap > 2 && sc_run > 2))) {
        printf("DRS allowed");
    }
    else {
        if (safe == 0) {
            err++;
        }
        if (distance >= 1) {
            err++;
        }
        if (lap <= 2) {
            err++;
        }
        if (sc_run <= 2) {
            err++;
        }
        printf("DRS not allowed %d", err);
    }
    return 0;
}