// Solve for all cases: ax + b = 0

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, a, b;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    if(a == 0)
        printf("x = inf\n");
    else if(b == 0)
        printf("x = 0\n");
    else
    {
        x = (0.0 - b)/a;
        printf("x = %f\n", x);
    }
    return 0;
}