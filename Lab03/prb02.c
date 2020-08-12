// Determine if a number n contains the digit i, n>=0, n<10^9

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, copy_n;

    printf("Number: ");
    scanf("%d", &n);
    printf("Digit: ");
    scanf("%d", &i);

    if ((n >= 0 && n <= 9) && n == i)
        printf("The number %d contains the digit %d\n", n, i);
    else
    {
        copy_n = n;
        while (n != 0)
        {
            if(n%10 == i)
            {
                printf("The number %d contains the digit %d\n", copy_n, i);
                return 0;
            }
            n = n / 10;
        }
        printf("The number %d DOES NOT contain the digit %d\n", copy_n, i);
      }
    return 0;
}