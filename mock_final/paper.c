#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main() {
    char paper_one[4];
    char paper_two[4];

    scanf("%s\n%s", paper_one, paper_two);
    int digit_1, digit_2;
    if((int) strlen(paper_one) == 3){
        digit_1 = (((int)(paper_one[strlen(paper_one)-2]) - '0') * 10) + ((int)(paper_one[strlen(paper_one)-1]) - '0');
    }
    else {
        digit_1 = ((int)(paper_one[strlen(paper_one)-1]) - '0');
    }

    if((int) strlen(paper_two) == 3){
        digit_2 = (((int)(paper_two[strlen(paper_two)-2]) - '0') * 10) + ((int)(paper_two[strlen(paper_two)-1]) - '0');
    }
    else {
        digit_2 = ((int)(paper_two[strlen(paper_two)-1]) - '0');
    }
    int y = abs(digit_1 - digit_2);
    int diff = pow(2, y);
    printf("%d", diff);
}