#include <stdio.h>

int main() {
    double matrix1[3][3];
    int i, j, err = 0, check = 0;

    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++) {
            scanf("%lf", &matrix1[i][j]);
        }
    }

    for (i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++) {
            if (i == j) {
                check += matrix1[i][j];
            }
            else {
                if (matrix1[i][j] != 0){
                    err++;
                }
                else {
                    continue;
                }
            }
        }
    }

    double ans = check/3;
    if (err > 0 || ans != matrix1[1][1]) {
        printf("This is not a scalar matrix");
    }
    else {
        printf("This is a scalar matrix");
    }

    return 0;
}
