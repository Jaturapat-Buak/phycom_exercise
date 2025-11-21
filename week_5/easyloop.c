#include <stdio.h>
 
int main() {
    int m;
 
    scanf("%d", &m);
    if (m >= 0) {
        for (m; m >= 0; m--){
        printf("%d ", m);
    }
    }
    else {
        for (m; m <= 0; m++){
        printf("%d ", m);
    }
    }
    return 0;
}