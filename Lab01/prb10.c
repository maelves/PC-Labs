// First digit after decimal 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    printf("Number: ");
    scanf("%f", &f);
    f = (f * 10.0);
    f = (unsigned int)f % 10; //I've used 'usigned int' in case we have negative numbers
    printf("First digit after decimal: %.f\n", f);
    return 0;
}