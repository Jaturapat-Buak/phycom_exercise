#include <stdio.h>

int main() {
    float old_price, percent;
    int num;

    scanf("%f\n%f\n%d", &old_price, &percent, &num);

    float discount = (old_price*(percent/100));
    float ans1= (old_price - discount) * num;
    float ans2 = (((num / 3) * 2) + (num % 3)) * old_price;

    if (ans1 <= ans2) {
        printf("Discount %.0f%%\n", percent);
        printf("%.2f", ans1);
    }

    else {
        printf("Buy 2 Get 1\n");
        printf("%.2f", ans2);
    }

    return 0;
}