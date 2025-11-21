#include <stdio.h>
#include <ctype.h>

int main() {
    char word[300], need_word;
    int i, size = 0, count = 0;

    scanf("%[^\n]\n%c", word, &need_word);

    while (word[size] != '\0') {
        size++;
    }

    for (i = 0; i <= size; i++) {
        if (tolower(word[i]) == need_word) {
            count++;
        }
    }
    if (count > 0) {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, need_word);
        printf("Position: ");
        int found = 0;
        for (i = 0; i <= size; i++) {
            if (tolower(word[i]) == need_word) {
                found++;
                printf("%d", i+1);
                if (found < count) {
                    printf(", ");
                }
            }
        }
    }
    else {
        printf("Not found.");
    }
    return 0;
}