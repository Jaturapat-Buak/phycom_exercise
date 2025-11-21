#include <stdio.h>

int main() {
    char word[100];
    int n = 0, ri = 0, point = 0, i, j;

    scanf("%[^\n]", word);

    while(word[n] != '\0'){
        n++;
    }
    //printf("%d\n", n);
    for (i = 0; i <= n; i++) {
        //printf("%c", word[i]);
        //printf("%c\n", word[n-i-1]);
        if (word[i] == word[n-i-1]){
            point++;
        }
        else {
            continue;
        }
    }
    //printf("%d\n", point);
    if ((point - 1) == n){
        printf("It is Palindrome.");
    }
    else {
        printf("It is not Palindrome.");
    }

    return 0;
}
