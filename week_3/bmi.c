#include <stdio.h>

int main() {
    float hei, wei, bmi;

    scanf("%f\n%f", &hei, &wei);

    hei = hei /100;

    bmi = wei / (hei*hei);

    printf("%f", bmi);

    return 0;
}