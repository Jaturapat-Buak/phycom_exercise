#include <stdio.h>

int main() {
    int m, n, i;

    scanf("%d\n%d", &m, &n);

    for (i = 1; i <= n; i++) {
        int ans = m * i;
        printf("%d x %d = %d\n", m, i, ans);
    }

    return 0;
}