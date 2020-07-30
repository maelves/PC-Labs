// Determine if an year is a leap year

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    printf("Year: ");
    scanf("%d", &y);
    if(y % 4 == 0 || ((y % 400 == 0) && !(y % 100 == 0)))
        printf("Leap year\n");
    else
        printf("NOT leap year\n");
    return 0;
}