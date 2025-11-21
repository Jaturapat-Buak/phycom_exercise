#include <stdio.h>
#include <ctype.h>
 
int main() {
    char a;
 
    scanf("%c", &a);
 
    if (isdigit(a)) {
        printf("number");
    }
 
    else if (isupper(a)) {
        printf("uppercase");
    }
 
    else if (islower(a)) {
        printf("lowercase");
    }
 
    else {
        printf("error");
    }
 
    return 0;
}