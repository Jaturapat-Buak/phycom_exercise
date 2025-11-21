#include <stdio.h>

int main() {
    int x, y, day, hr, min;

    scanf("%d", &x);

    y = x;
    day = x / 86400;
    x %= 86400;
    hr = x / 3600;
    x %= 3600;
    min = x / 60;
    x %= 60;

    printf("%d s = %d d %d h %d m %d s", y, day, hr, min, x);

    return 0;
}