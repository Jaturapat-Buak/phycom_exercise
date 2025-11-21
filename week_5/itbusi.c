#include <stdio.h>
  
int main() {
    float start_bank, start_my,  money, err = 0;
    char status;
    scanf("%f\n%f\n", &start_bank, &start_my);
    scanf(" %c %f", &status, &money);
  
    while(status != 'E') {
        if (err == 3) {
            break;
        }
        if (status == 'D') {
            if (start_my >= money) {
                start_my -= money;
                start_bank += money;
                err = 0;
            } 
            else {
                err++;
            }
        }       
        else if (status == 'W') {
            if (start_bank >= money) {
                start_my += money;
                start_bank -= money;
                err = 0;
            } 
            else {
                err++;
            }
        } 
        else {
            err++; 
        }       
        scanf(" %c %f", &status, &money);
    }
 
    printf("%.2f\n%.2f", start_bank, start_my);
    return 0;
}