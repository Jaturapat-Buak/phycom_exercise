#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char main_arr[20][60];

    int i, j;

    for (i = 0; i < 20; i++) {
        scanf(" %[^\n]", main_arr[i]);
    }

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 60; j++) {
            main_arr[i][j] = tolower(main_arr[i][j]);
        }
    }

    char ans[20];
    for (i = 0; i < 19; i++) {
        for (j = i + 1; j < 20; j++) {
            if (strcmp(main_arr[i], main_arr[j]) > 0) {
                strcpy(ans, main_arr[i]);
                strcpy(main_arr[i], main_arr[j]);
                strcpy(main_arr[j], ans);
            }
        }
    }

    for (i = 0; i < 20; i++) {
        int check = 1;
        for (j = 0; main_arr[i][j] != '\0'; j++) {
            if (isalpha((unsigned char)main_arr[i][j])) {
                if (check) {
                    main_arr[i][j] = toupper((unsigned char)main_arr[i][j]);
                    check = 0;
                } else {
                    main_arr[i][j] = tolower((unsigned char)main_arr[i][j]);
                }
            } 
            else {
                check = 1;
            }
        }
        printf("%s\n", main_arr[i]);
    }
    return 0;
}