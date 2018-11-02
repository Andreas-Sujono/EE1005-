#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char x;

    printf("input character: ");
    scanf("%c", &x);

    if( x < 97)
    {
        printf("%c is not a lowercase letter", x);
    }

    if( x >= 97)
    {
        printf("%c is a lowercase letter", x);

    }


    return 0;
}
