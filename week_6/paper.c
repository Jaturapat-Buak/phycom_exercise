#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char paper[13][4] = {"A0", "A1", "A2", "A3", "A4", "A5", "A6", "A7", "A8", "A9", "A10", "A11", "A12"};
    char paper1[4], paper2[4];
    int i, j;

    scanf("%s\n%s", &paper1, &paper2);
    for (i = 0; i <= 13; i++) {
        for (j = 0; j <= 13; j++) {
            if ((strcmp(paper[i], paper1) == 0) && (strcmp(paper[j], paper2) == 0)) {
                int ans = pow(2, (abs(i-j)));
                printf("%d", ans);
            }
        }
    }
    return 0;
}