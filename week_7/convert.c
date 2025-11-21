#include <stdio.h>
#include <ctype.h>
#include <string.h>

int compare(char x[], char y[], int size_a, int size_b);
char change(char word);

int compare(char x[], char y[], int size_a, int size_b){
    int num1 = 0, num2 = 0;
    char ans1[size_a], ans2[size_b];

    for (int i = 0; i < size_a; i++){
        ans1[i] = tolower(x[i]);
    }
    ans1[size_a] = '\0';

    for (int i = 0; i < size_b; i++){
        ans2[i] = tolower(y[i]);
    }
    ans2[size_b] = '\0';

    if (strcmp(ans1, ans2) == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

char change(char word){
    if (isupper(word)){
        return tolower(word);
    }
    else if (islower(word)){
        return toupper(word);
    }
    else {
        return word;
    }
}

int main() {
    char x[101], y[101];
    int size1 = 0, size2 = 0;

    scanf("%[^\n]\n%[^\n]", x, y);

    while(x[size1] != '\0'){
        size1++;
    }

    while(y[size2] != '\0'){
        size2++;
    }

    printf("*** Results ***\n");
    
    for(int i = 0; i < size1; i++) {
        printf("%c", change(x[i]));
    }
    printf("\n");

    for(int i = 0; i < size2; i++) {
        printf("%c", change(y[i]));
    }
    printf("\n");
    printf("***************\n");

    if (compare(x, y, size1, size2) == 0) {
        printf("Both strings are the same.");
    }
    else {
        printf("Both strings are not the same.");
    }
    return 0;
}