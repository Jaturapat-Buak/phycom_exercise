#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[100];
    scanf("%[^\n]", word);
    int n = strlen(word);

    float temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            int a = tolower(word[j]);
            int b = tolower(word[j+1]);
            if(a > b || (a == b && islower(word[j]) < islower(word[j+1]))) {
                temp = word[j];
                word[j] = word[j+1];
                word[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        if (word[i] == ' ') continue;
        int count = 1;
        while (i + 1 < n && word[i+1] == word[i]) {
            count++;
            i++;
        }
        printf("%c = %d\n", word[i], count);
    }
    return 0;
}
