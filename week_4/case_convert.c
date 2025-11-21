#include <stdio.h>
 
int main() {
    char a;
 
    scanf("%c", &a);
 
    int num = (int)a;
 
    if (num >= 97 && num <= 122) {
        printf("%c", a-32);
    }
    else if (num <= 90 && num >= 65) {
        printf("%c", a+32);
    }
 
    else {
        printf("error");
    }
 
    return 0;
}