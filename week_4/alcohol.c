#include <stdio.h>

int main() {
    char sex, license;
    float wei, percent, cc, num, rest;

    scanf("%c\n%f\n%c\n%f\n%f\n%f\n%f", &sex, &wei, &license, &cc, &percent, &num, &rest);

    float alco = num * ((percent * cc)/100);
    float alco_m = alco / (wei*0.68*10);
    float last_alco_m = alco_m - (0.015*rest);
    float alco_f = alco / (wei*0.55*10);
    float last_alco_f = alco_f - (0.015*rest);

    if (license == 'Y') {
        if(sex == 'M') {
            if (last_alco_m > 0.05) {
                printf("Not Safe");
            }

            else {
                printf("Safe");
            }
        }

        else {
            if (last_alco_f > 0.05) {
                printf("Not Safe");
            }

            else {
                printf("Safe");
            }
        }
    }

    else {
        printf("Not Safe");
    }

}