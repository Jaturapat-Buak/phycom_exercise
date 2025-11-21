#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr_num[n];
    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        arr_num[i] = num;
    }
    int change, num;
    int arr_num_n[n+1];
    scanf("%d %d", &change, &num);
    int check = 0;
    for (int i = 0; i < change; i++) {
        arr_num_n[i] = arr_num[i];
    }
    arr_num_n[change] = num;
    for (int i = change; i < n; i++) {
        arr_num_n[i + 1] = arr_num[i];
    }
    for (int i = 0; i < n + 1; i++){
        printf("%d ", arr_num_n[i]);
    }
}
//Non-Link List