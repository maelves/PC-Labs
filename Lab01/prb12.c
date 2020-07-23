// Printing the digits of a 4-digits number in reversed order without using a loop

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b, c, d;
    printf("Number: ");
    scanf("%c%c%c%c", &a, &b, &c, &d);
    printf("Number in reversed order %c%c%c%c\n", d, c, b, a);
    return 0;
}