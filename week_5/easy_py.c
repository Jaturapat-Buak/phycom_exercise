#include <stdio.h>

int main() {
    int i = 1, j = 1, n, time, space, space2;

    scanf("%d", &n);
    time = n;
    space = n - 1;
    space2 = n - 1;

    for(i = 1; i <= n; i++){
        space = space2;
        for(j = 1; j <= time; j++) {
            if (space > 0) {
                printf(" ");
                space--;
            }

            else {
                printf("*");
            }
        }
        space2--;
        time++;
        printf("\n");
    }
    return 0;
}
