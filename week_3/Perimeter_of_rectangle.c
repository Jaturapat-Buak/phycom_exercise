#include <stdio.h>

int main() {
    double wid, hei, ans;

    scanf ("%lf\n%lf", &wid, &hei);

    ans = (wid * 2) + (hei * 2);

    printf("Perimeter of rectangle = %.4lf units", ans);

    return 0;
}