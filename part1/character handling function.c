#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(void)
{
    char x;

    printf("input a character: ");
    scanf("%c", &x);

    if( isalpha(x))
    {
        printf("%c is alphabet.\n", x);

        if ( isupper(x) !=0)
        { printf("%c is in uppercase\n", x);}

        else
        {
            printf("%c is not in uppercase.\n", x);
            printf("%c is the uppercase.\n", toupper(x));
        }
    }

     else
     {
         if( isdigit(x)){
            printf("%c is a digit\n",x);
         }
         else{
            printf("%c is neither an alphabet nor a digit.\n", x);
         }

     }
    return 0;
}
