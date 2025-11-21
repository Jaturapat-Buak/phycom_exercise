#include <stdio.h>

int main() {
    char no[100];
    int n = 0;
    scanf("%s", no);
    while (no[n] != '\0'){
        n++;
    }
    if (n <= 3){
        if(no[n-1] == '0' || no[n-1] == '5'){
            printf("Science");
        }
        else if (no[n-1] == '3' || no[n-1] == '7') {
            printf("Literature");
        }
        else {
            printf("General Collection");
        }
    }
    else {
        int last_two;
        last_two = (((int)(no[n-2]) - '0') * 10) + (((int)(no[n-1]) - '0'));
        if(!(last_two % 4)) {
            printf("Reference");
        }
        else if(last_two == 11 || last_two == 22 || last_two == 33){
            printf("History");
        }
        else {
            printf("Unclassified");
        }
    }
}