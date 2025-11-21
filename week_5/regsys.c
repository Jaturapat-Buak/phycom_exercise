#include <stdio.h>
 
int main() {
    int n = 1, ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0, sum_age = 0;
    float sum_wei = 0, sum_hei = 0;
 
    for(n; n <= 50; n++){
        int age = 0;
        float hei = 0, wei = 0;
        scanf("%d %f %f", &age, &hei, &wei);
 
        if (age >= 20 && hei >= 160) {
            ans1 += 1;
        }
        if (age < 20 && (hei <= 180 || wei >= 60)) {
            ans2 += 1;
        }
        if (age >= 30 && (wei >= 40 && wei <= 80)) {
            ans3 += 1;
        }
        if (age < 40 && (wei < 85 || hei <= 200)) {
            ans4 += 1;
        }
        sum_age += age;
        sum_hei += hei;
        sum_wei += wei;
    }
    float ave_age = sum_age/50;
    float ave_wei = sum_wei/50;
    float ave_hei = sum_hei/50;
    printf("Age >= 20 and Height >= 160: %d\n", ans1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", ans2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", ans3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", ans4);
    printf("Average Age: %.0f\n", ave_age);
    printf("Average Height: %.2f\n", ave_hei);
    printf("Average Weight: %.2f\n", ave_wei);
    return 0;
}