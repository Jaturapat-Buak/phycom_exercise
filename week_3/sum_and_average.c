#include <stdio.h>

int main() {
    double a, b, c, d, sum, ave;

    scanf("%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d);

    sum = a + b + c + d;
    ave = sum/4;

    printf("Summation is %.2lf\n", sum);
    printf("Average is %.3lf", ave);

    return 0;
}