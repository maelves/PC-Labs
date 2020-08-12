// Create an ASCII like table

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c;
    c = 0;
    char buffer [33];
    

    while (c < 128)
    {
        itoa (c, buffer, 2);
        printf("%d - %c - %s", c, c, buffer);
        c++;
    }
    return 0;
}