#include <stdio.h>
 
int main() {
    int n, m;
 
    scanf("%d %d", &n, &m);
 
    if (n >= m) {
        for (n; n >= m; n--){
        printf("%d ", n);
    }
    }
    else if (n < m) {
        for (n; n <= m; n++){
        printf("%d ", n);
    }
    }
 
    return 0;
}