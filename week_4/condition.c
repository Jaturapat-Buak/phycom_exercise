#include <stdio.h>
 
int main() {
    int a, b, ans;
 
    scanf("%d %d", &a, &b);
 
    if (a == b) {
        ans = a + b;
        printf("%d + %d = %d", a, b, ans);
    }
 
    else {
        ans = a - b;
        printf("%d - %d = %d", a, b, ans);
    }
 
    return 0;
}