#include <stdio.h>
 
int main() {
    float a, b, c;
 
    scanf("%f %f %f", &a, &b, &c);
 
    if ((a>b && a<c) || (a>c && a<b)){
        printf("%.2f", a);
    }else if ((b>a && b<c) || (b>c && b<a)){
        printf("%.2f", b);
    }else {
        printf("%.2f", c);
    }
    return 0;
}