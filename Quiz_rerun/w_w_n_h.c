#include <stdio.h>
 
int main() {
    int start, stop, sum = 0;
 
    scanf("%d\n%d", &start, &stop);
 
    printf("pass : ");
 
    if (start <= stop) {
        for(start; start <= stop; start++) {
            if ((start%2) == 0) {
                printf("%d ", start);
                sum += start;
            }
    }
    }
 
    else {
        while(start >= stop) {
            if ((start%2) == 0) {
                printf("%d ", start);
                sum += start;
            }
            start--;
        }
    }
    printf("\n");
    printf("Sum : %d", sum);
    return 0;
}