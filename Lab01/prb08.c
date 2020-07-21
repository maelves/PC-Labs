// Capital letter to small letter

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Capital letter: ");
    scanf("%c", &c);
    c = c + 32; // in ASCII 32 is the diffrence between 'A' and 'a' or any other couples of letters
    printf("Small letter: %c\n", c);
    return 0;
}