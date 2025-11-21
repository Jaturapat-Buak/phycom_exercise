#include <stdio.h>
 
int main() {
    int n, m;
 
    scanf("%d", &n);
 
    while (n != -9) {
        m += n;
        scanf("%d", &n);
    }
 
    printf("%d",m);
    return 0;
}