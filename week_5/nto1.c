#include <stdio.h>

int main() {
    int s = 1, n;

    scanf("%d", &n);

    do {
        printf("%d ", n);
        n--;
    }
    while(n >= s);

    return 0;
} 