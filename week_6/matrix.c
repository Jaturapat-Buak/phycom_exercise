#include <stdio.h>

int main() {
    double matrix1[3][3], matrix2[3][3];
    int i, j, k;

    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++) {
            scanf("%lf", &matrix1[i][j]);
        }
    }
    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++) {
            scanf("%lf", &matrix2[i][j]);
        }
    }
    printf("A x B\n");
    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++) {
            double ans = 0;
            for (k = 0; k <= 2; k++) {
                ans += matrix1[i][k] * matrix2[k][j];
            }
            printf("%.2lf ", ans);
        }
        printf("\n");
    }
    return 0;
}