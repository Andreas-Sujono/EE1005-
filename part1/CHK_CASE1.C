
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    printf("type a character : ");
    scanf("%c", &a);

    if(islower(a)){
        printf("its a lowercase character");
    }
    else{
        printf("its a uppercase character");
    }
  return 0;
}

