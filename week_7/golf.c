#include <stdio.h>
#include <math.h>

double calculate(int u, int degree);

double calculate(int u, int degree) {
    double radius = (degree * 3.141592653589793)/180;
    double h = ((u*u) * (sin(radius)*sin(radius))) / (2 * 9.81);
    return h;
}
int main() {
    int degree, u;
    double ans;

    scanf("%d\n%d", &degree, &u);

    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", calculate(u, degree));
    return 0;
}