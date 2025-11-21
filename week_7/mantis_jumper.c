#include <stdio.h>
int fibo(int x);

int fibo(int x){
    if (x == 1) {
        return 1;
    }
    if (x == 2) {
        return 2;
    }
    int a = 1, b = 2, use;
    for (int i = 3; i <= x; i++) {
        use = a + b;
        a = b;
        b = use;
    }
    return b;
}
int main() {
    int round;

    scanf("%d", &round);

    printf("method = %d", fibo(round));
    return 0;
}