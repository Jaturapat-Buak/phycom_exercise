#include <stdio.h>
#include <string.h>

int main() {
    struct info {
        char fname[60];
        char sname[60];
        char sex[7];
        int age;
        char id[12];
        float gpa;
    };

    struct info info_1;

    scanf("%s %s %s %d %s %f", info_1.fname, info_1.sname, info_1.sex, &info_1.age, info_1.id, &info_1.gpa);
    if (strcmp(info_1.sex, "Male") == 0) {
        printf("Mr");
    }
    else {
        printf("Miss");
    }
    printf(" %c %s (%d) ID: %s GPA %.2f", info_1.fname[0], info_1.sname, info_1.age, info_1.id, info_1.gpa);
}