#include <stdio.h>

int main() {
    double a, b, ans1, ans2, ans3, ans4;

    scanf("%lf,%lf", &a, &b);

    ans1 = a + b;
    ans2 = a - b;
    ans3 = a * b;
    ans4 = a / b;

    printf("The sum of the given numbers : %lf\n", ans1);
    printf("The difference of the given numbers : %lf\n", ans2);
    printf("The product of the given numbers : %lf\n", ans3);
    printf("The quotient of the given numbers : %lf", ans4);

    return 0;
}