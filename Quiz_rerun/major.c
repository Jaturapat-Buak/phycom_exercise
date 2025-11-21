#include <stdio.h>

int main(){
    int age, day;

    scanf("%d\n%d", &age, &day);

    
    if (day == 4) {
        printf("Ticket price: 100 Baht");
    }
    if (day != 4 && (day != 7 && day != 1)) {
        if (age <= 12) {
            printf("Ticket price: 120 Baht");
        }
        else if (age >= 13 && age <= 59) {
            printf("Ticket price: 220 Baht");
        }
        else if (age >= 60){
            printf("Ticket price: 140 Baht");
        }
    }
    if (day == 7 || day == 1) {
        if (age <= 12) {
            printf("Ticket price: 140 Baht");
        }
        else if (age >= 13 && age <= 59) {
            printf("Ticket price: 240 Baht");
        }
        else if (age >= 60){
            printf("Ticket price: 160 Baht");
        }
    }
    return 0;
}