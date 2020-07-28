// Print an error if the scanf reading isn't correct


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    char c;
    int k = scanf("%d %d%c", &x, &y, &c);
    if(k == 3 && c == '\n')
        printf("CORRECT\n");
    else
        printf("INCORRECT INPUT\n");
    return 0;
}
