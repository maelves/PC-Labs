// Determine a^b, |a|<10^9, |b|<10^9, 15 digits precision

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    long long int pow = 1;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Result: 1\n");
    }
    else
    {
        while (b != 0)
        {
            pow = pow * a;
            b--;
        }
        printf("Result %lld\n", pow);
    }
    return 0;
}