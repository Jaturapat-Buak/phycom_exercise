#include <stdio.h>
#include <ctype.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    char alpha[n], check_list[] = {}, w;

    for (i = 0; i <= n-1; i++) {
        scanf(" %c", &w);
        alpha[i] = tolower(w);
    }

    for (i = 0; i < n; i++) {
        int count = 0;
        int already_printed = 0;

        for (j = 0; j < i; j++){
            if(alpha[i] == alpha[j]){
                already_printed = 1;
                break;
            }
        }

        if (!already_printed) {
            for (j = 0; j < n; j++) {
                if(alpha[i] == alpha[j]) {
                    count++;
                }
            }
            printf("%c: %d\n", alpha[i], count);
        }
    }
    return 0;
}