#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

double celsiusToFahrenheit(double celcius) {
    double fahrenheit;
    fahrenheit = 32 + celcius*(180.0/100.0);
    return fahrenheit;
}

double fahrenheitToCelcius(double fahrenheit) {
    double celcius;
    celcius = (fahrenheit - 32) * 5/9;
    return celcius;
}

void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}

int main() {
    double temp, ans;
    char type;

    scanf("%lf %c", &temp, &type);

    switch (type) {
        case 'c' :
        case 'C' :
            ans = celsiusToFahrenheit(temp);
            printFarenheit(ans);
            break;
        case 'f' :
        case 'F' :
            ans = fahrenheitToCelcius(temp);
            printCelcius(ans);
            break;
        default :
            break;
    }
    return 0;
}