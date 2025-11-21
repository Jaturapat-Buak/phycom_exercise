#include <stdio.h>
#include <ctype.h>

int main() {
    char aha[] = {'a', 'b', 'x', 'y', 
                'p', 'q', 'r', 'm',
                'n', 'c', 'e', 'd', 
                'k', 'l', 'j', 'o',
                's', 'h', 't', 'u',
                'f', 'v', 'z', 'g',
                'w', 'i'};
    char aha_big[] = {'A', 'B', 'X', 'Y', 
                    'P', 'Q', 'R', 'M',
                    'N', 'C', 'E', 'D', 
                    'K', 'L', 'J', 'O',
                    'S', 'H', 'T', 'U',
                    'F', 'V', 'Z', 'G',
                    'W', 'I'};
    char word[200];

    int n = 0, i, aha_long = 26, j, fake;

    scanf("%[^\n]", word);

    while (word[n] != '\0'){
        n++;
    }

    for(i = 0; i <= n; i++) {
        if (word[i] == ' ') {
            printf(" ");
        }
        else if (isupper(word[i])) {
            for(j = 0; j <= aha_long; j++){
                if (aha_big[j] == word[i]){
                    if (j < 5) {
                        fake = 21 + j;
                        printf("%c", aha_big[fake]);
                    }
                    else {
                        printf("%c", aha_big[j-5]);
                    }
                }
                else {
                    continue;
                }
            }
        }
        else {
            for(j = 0; j <= aha_long; j++){
                if (aha[j] == word[i]){
                    if (j < 5) {
                        fake = 21 + j;
                        printf("%c", aha[fake]);
                    }
                    else {
                        printf("%c", aha[j-5]);
                    }
                }
                else {
                    continue;
                }
            }
        }
    }
    return 0;
}