#include <stdio.h>
#define F_LOWER 0
#define F_UPPER 300
#define F_STEP 20
#define C_LOWER -17
#define C_UPPER 148
#define C_STEP 11

void fahrToCel()
{
    float fahr, celsius;
    fahr = F_LOWER;
    while (fahr <= F_UPPER) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + F_STEP;
    }
}

void celToFahr()
{
    float fahr, celsius;
    celsius = C_LOWER;
    while (celsius <= C_UPPER) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + C_STEP;
    }
}

int main(int argc, char *argv[])
{
    printf("--Celsius To Fahrenheit--\n");
    celToFahr();
    printf("--Fahrenheit To Celsius--\n");
    fahrToCel();
}
