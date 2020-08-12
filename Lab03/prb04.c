// Show all the characters between two given ones

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2;

    printf("Character 1: ");
    scanf("%c", &c1);
    fflush(stdin);
    printf("Character 2: ");
    scanf("%c", &c2);

    if (c1 > c2)
    {
        while (c1 != c2-1)
        {
            printf("%c ", c2 + 1);
            c2++;
        }
        printf("\n");
    }
    if (c1 < c2)
    {
        while (c1 != c2-1)
        {
            printf("%c ", c1 + 1);
            c1++;
        }
        printf("\n");
    }
    return 0;
}