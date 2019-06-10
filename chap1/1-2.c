#include <stdio.h>

void fahrToCel()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void celToFahr()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 148;
    step = 11;

    celsius = -17;
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%6.0f %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }


}

int main(int argc, char *argv[])
{
    printf("--Celsius To Fahrenheit--\n");
    celToFahr();
    printf("--Fahrenheit To Celsius--\n");
    fahrToCel();
}
