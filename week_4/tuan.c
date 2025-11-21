#include <stdio.h>
#include <ctype.h>

int main() {
    char word;

    scanf("%c", &word);

    if (isdigit(word)) {
        printf("number");
    }
    else if (isupper(word)) {
        printf("uppercase");
    }
    else if (islower(word)) {
        printf("lowercase");
    }
    else {
        printf("error");
    }
    return 0;
}
