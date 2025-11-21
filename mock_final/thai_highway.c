#include <stdio.h>
#include <string.h>
int main(){
    char road[4][50] = {"Phet Kasem", "Phahonyothin","Mittraphap","Sukhumvit"};
    int n;
    scanf("%d\n", &n);
    char in[n][50];
    for(int i = 0; i<n; i++){
        char name[50];
        scanf(" %[^\n]", name);
        strcpy(in[i], name);
    }
    for(int i = 0; i<4; i++){
        for(int j = 0; j<n; j++) {
            if(strcmp(road[i], in[j]) == 0){
                printf("%s\n", road[i]);
                strcpy(in[j], "use");
            }
            else {
                continue;
            }
        }
    }
}
