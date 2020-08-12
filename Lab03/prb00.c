// Print the reversed number, n>=0, n<10^9

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Number: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Reversed number : 0\n");
    else
    {
        printf("Reversed number: ");
        while (n != 0)
        {
            printf("%d", n % 10);
            n = n / 10;
        }
        printf("\n");
    }
    return 0;
}
