#include <stdio.h>
#include <string.h>
#include <ctype.h>

void str_to_lower(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

void capitalize_words(char str[]) {
    int new_word = 1;
    for (int i = 0; str[i]; i++) {
        if (isspace((unsigned char)str[i])) {
            new_word = 1;
        } else {
            if (new_word) {
                str[i] = toupper((unsigned char)str[i]);
                new_word = 0;
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
    }
}

void sort_names(char names[][60], char lower_names[][60], int size) {
    char temp[60], temp_lower[60];
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(lower_names[i], lower_names[j]) > 0) {

                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);

                strcpy(temp_lower, lower_names[i]);
                strcpy(lower_names[i], lower_names[j]);
                strcpy(lower_names[j], temp_lower);
            }
        }
    }
}

int main() {
    int size;
    scanf("%d", &size);

    char names[size][60];
    char lower_names[size][60];

    for (int i = 0; i < size; i++) {
        scanf(" %[^\n]", names[i]);
        strcpy(lower_names[i], names[i]);
        str_to_lower(lower_names[i]);
    }

    sort_names(names, lower_names, size);

    for (int i = 0; i < size; i++) {
        capitalize_words(names[i]);
        printf("%s\n", names[i]);
    }

    return 0;
}
