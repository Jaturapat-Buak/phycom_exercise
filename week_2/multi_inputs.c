#include <stdio.h>

int main() {
    char fir[30], sec[30], thi[30], fou[30];

    scanf("%s\n%s\n%s\n%s", &fir, &sec, &thi, &fou);

    printf("String 1: %.3s\n", fir);
    printf("String 2: %.4s\n", sec);
    printf("String 3: %.5s\n", thi);
    printf("String 4: %.6s", fou);

    return 0;
}