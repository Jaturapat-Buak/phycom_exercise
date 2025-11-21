#include <stdio.h>
 
int main() {
    int M[8] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[7] = {1, 3, 9, 7, 11, 15, 19};
 
    int y, i, r, check = 0;
    scanf("%d", &y);
     
    while (y > 20 || y < 1){
        scanf("%d", &y);
    }
 
    for (i = 0; i < 8; i++){
        if (y == M[i]) {
            check = 1;
            printf("%d is in M at index [%d]", y, i);
            break;
        }
    }
 
    for (i = 0; i < 7; i++){
        if (y == N[i]) {
            check = 1;
            printf("%d is in N at index [%d]", y, i);
            break;
        }
    }
 
    if (check == 0) {
        printf("%d is not in neither M nor N", y);
    }
    return 0;
}