#include <stdio.h>
 
int main() {
    char text[101];
    scanf("%[^\n]", text);
 
    int size = 0;
    while (text[size] != '\0') {
        size++;
    }
 
    size--;
    while(size >= 0) {
        printf("%c", text[size--]);
    }
 
    return 0;
}