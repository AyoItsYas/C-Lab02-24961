#include <stdio.h>

int main(void)
{
    float fahrenheit;

    printf("Temperature in degrees Fahrenheit : ");
    scanf("%f", &fahrenheit);

    printf("\n");
    printf("Temperature in degrees Celsius    : %.2f\n", (5.0 / 9.0) * (fahrenheit - 32.0));

    return 0;
}