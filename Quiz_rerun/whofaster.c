#include <stdio.h>

int main() {
    char f_name[50], s_name[50];
    int f_arr[7], s_arr[7], f_total = 0, s_total = 0, hrv = 0, acc = 0, equal = 0;

    scanf(" %[^\n]\n", f_name);
    for(int i = 0; i < 7; i++) {
        scanf(" %d", &f_arr[i]);
        f_total += f_arr[i];
    }

    scanf(" %[^\n]\n", s_name);
    for(int i = 0; i < 7; i++) {
        scanf(" %d", &s_arr[i]);
        s_total += s_arr[i];
    }

    int f_avg = f_total/7;
    int s_avg = s_total/7;

    for(int i = 0; i < 7; i++){
        if(f_arr[i] > s_arr[i]) {
            acc++;
        }
        else if(f_arr[i] < s_arr[i]) {
            hrv++;
        }
        else {
            equal++;
        }
    }

    printf("%s: %d minutes, average %d minutes/day\n", f_name, f_total, f_avg);
    printf("%s: %d minutes, average %d minutes/day\n", s_name, s_total, s_avg);
    printf("Faster days - %s: %d, %s: %d, Equal: %d", f_name, hrv, s_name, acc, equal);

    return 0;
}