// Harmonic series

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 1;
    double h = 0;
    int n;

    printf("n = ");
    scanf("%d", &n);

    while(k < n+1)
   {
       h = (1.0/k) + h;
       k++;
   }
    printf("Result %lf\n", h);
    return 0;
}