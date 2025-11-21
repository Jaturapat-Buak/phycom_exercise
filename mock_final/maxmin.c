#include <stdio.h>

int main(){
    char type[3];
    scanf("%s", type);
    int n, max;
    if (type[2] == 'X'){
        scanf("%d\n", &n);
        max = n;
        scanf("%d\n", &n);
        if(n > max){
            max = n;
        }
        scanf("%d\n", &n);
        if(n > max){
            max = n;
        }
        scanf("%d\n", &n);
        if(n > max){
            max = n;
        }
        scanf("%d", &n);
        if(n > max){
            max = n;
        }
    }
    else {
        scanf("%d\n", &n);
        max = n;
        scanf("%d\n", &n);
        if(n < max){
            max = n;
        }
        scanf("%d\n", &n);
        if(n < max){
            max = n;
        }
        scanf("%d\n", &n);
        if(n < max){
            max = n;
        }
        scanf("%d", &n);
        if(n < max){
            max = n;
        }
    }
    printf("%s : %d", type, max);
}