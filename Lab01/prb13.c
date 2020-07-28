/*  x	|y	|x+y	|x*y	|
    5	|6	|11	    |30	    | */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, space;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("space = ");
    scanf("%d", &space);
    printf("%-*s|%-*s|%-*s|%-*s|\n", space, "x", space, "y", space, "x+y", space, "x*y");
    printf("%-*d|%-*d|%-*d|%-*d|\n", space, x, space, y, space, x+y, space, x*y);
    return 0;
}