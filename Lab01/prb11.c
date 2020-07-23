// Octal to Hexa using scanf/printf

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Number in octal: ");
    scanf("%o", &x);
    printf("Number in hex: %x\n", x);
    return 0;
}