#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    scanf("%lf\n%lf", &a, &b);
    
    c = sqrt(pow(a,2) + pow(b,2));

    printf("%.2lf", c);

    return 0;
}