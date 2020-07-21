// Degrees to Radians

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, r;
    printf("Degrees: ");
    scanf("%f", &d);
    r = (d * 3.1415) / 180;
    printf("Radians: %f\n", r);
    return 0;
}
