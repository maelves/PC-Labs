// Radians to Degrees

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, r;
    printf("Radians: ");
    scanf("%f", &r);
    d = (r * 180) / 3.1415;
    printf("Degrees: %f\n", d);
    return 0;
}