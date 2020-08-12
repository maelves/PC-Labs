// Determine if a number is a palindrome, n>=0, n<10^9

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c = 0, copy_n;

    printf("Number: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 9)
        printf("PALINDROME\n");
    else
    {
        copy_n = n;
        while (n != 0)
        {
            c = c*10 + n%10;
            n = n / 10;
        }
        if(copy_n == c)
            printf("PALINDROME\n");
        else
            printf("NON-PALINDROME\n");
        
  }
    return 0;
}