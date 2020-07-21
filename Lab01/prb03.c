// Fahrenheit to Celsius conversion (with 3 decimals)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32) * 5) / 9;
    printf("Temperature in Celsius: %.3f\n", c);
    return 0;
}
