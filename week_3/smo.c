#include <stdio.h>

int main() {
    double price, discount, n, nprice;
    
    scanf("%lf\n%lf\n%lf", &price, &discount, &n);

    nprice = (price - (price * (discount / 100))) * n;

    printf("%.2lf", nprice);

    return 0;
}