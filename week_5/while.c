#include <stdio.h>
 
int main() {
    int n = 1, m;
 
    scanf("%d", &m);
    while(n <= m){
        printf("%d ", n);
        n += 1;
    }
 
    return 0;
}