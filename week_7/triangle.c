#include <stdio.h>
#include <math.h>

double perimeter(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2)) + x + y;
}

double area(double x, double y) {
    return (x * y)/2;
}

int main() {
    double a, b;

    scanf("%lf\n%lf", &a, &b);

    double peri_ans, area_ans;
    peri_ans = perimeter(a, b);
    area_ans = area(a, b);
    printf("Perimeter: %.2lf\n", peri_ans);
    printf("Area: %.2lf", area_ans);
    return 0;
}