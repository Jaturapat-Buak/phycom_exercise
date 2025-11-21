#include <stdio.h>

int main() {
    double price, line, hei, pi = 3.14159265359, area, price_per_area;
    
    scanf("%lf\n%lf\n%lf", &price, &line, &hei);

    area = hei*pi*((line/2)*(line/2));
    price_per_area = price / area;

    printf("Volume : %.2lfml\n", area);
    printf("Baht/ml : %.4lf", price_per_area);

    return 0;
}