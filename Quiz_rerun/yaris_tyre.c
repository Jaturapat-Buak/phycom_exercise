#include <stdio.h>

int main(){
    char n;

    scanf("%c", &n);

    switch (n) {
        case 's':
        case 'S':
            printf("Soft");
            break;
        case 'm':
        case 'M':
            printf("Medium");
            break;
        case 'h':
        case 'H':
            printf("Hard");
            break;
        case 'i':
        case 'I':
            printf("Intermediate");
            break;
        case 'w':
        case 'W':
            printf("Wet");
            break;
        default :
            printf("error");
            break;
    }
    return 0;
}