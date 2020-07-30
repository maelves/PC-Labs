// Determine if a character is a capital lettler, a small letter, a number or something else

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Character: ");
    scanf("%c", &c);
    printf("The character is a:\n");
    
    if(c >= 65 && c <= 90)
        printf("capital letter\n");
    else if(c >= 97 && c <= 122)
        printf("small letter\n");
    else if(c >= 48 && c <= 57)
        printf("number\n");
    else
        printf("something else\n");
    
    return 0;
}