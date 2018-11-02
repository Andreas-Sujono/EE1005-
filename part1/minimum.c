#include <stdio.h>
int main(void)
{
    int number1, number2, number3, number4, smallest;
    printf("Enter the first integer: ");
    scanf("%d", &number1);
    printf("Enter the second integer: ");
    scanf("%d", &number2);
    printf("Enter the third integer: ");
    scanf("%d", &number3);
    printf("Enter the fourth integer: ");
    scanf("%d", &number4);

    smallest = number1;
    if(number2 < smallest){
        smallest = number2;
    }
    if(number3 < smallest){
        smallest = number3;
    }
    if( number4 < smallest){
        smallest = number4;
    }


    printf("%d is the smallest integer.", smallest);
    return 0;
}
