#include <stdio.h>
#include <math.h>

double standardFunc(double x, double y);

double standardFunc(double x, double y){
    double c;
    c = sqrt(pow(x,2) + pow(y,2));
    return c;
}

int main() {
    double x, y;
    double ans;
    scanf("%lf %lf", &x, &y);

    ans = standardFunc(x, y);

    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf",x, y, ans);
    return 0;
}