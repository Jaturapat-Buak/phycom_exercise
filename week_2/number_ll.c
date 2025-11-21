#include <stdio.h>
int main() {
    char fi,s,t,fo,fif;

    scanf("%c%c%c%c%c", &fi,&s,&t,&fo,&fif);

    printf("%-81c", fi);
    printf("%c%-80c", fi,s);
    printf("%c%c%-79c", fi,s,t);
    printf("%c%c%c%-78c", fi,s,t,fo);
    printf("%c%c%c%c%c", fi,s,t,fo,fif);

    return 0;
}