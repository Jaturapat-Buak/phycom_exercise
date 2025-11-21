#include <stdio.h>

int main() {
    char name[30], sur[30], id[8];
    int d,m,y;
    float gpa;

    scanf("%s", name);
    scanf("%s", sur);
    scanf("%s", id);
    scanf("%d/%d/%d", &d, &m, &y);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", name, sur);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", d, m, y);
    printf("GPA: %.2f", gpa);

    return 0;
}