// Small letter to capital letter

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Small letter: ");
    scanf("%c", &c);
    c = c - 32; // in ASCII 32 is the diffrence between 'A' and 'a' or any other couples of letters
    printf("Capital letter: %c\n", c);
    return 0;
}