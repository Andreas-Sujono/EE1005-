/* Calculate and display the difference of two input values */
#include <stdio.h>
#include <math.h>
int main(void)
{
    int num1, num2, difference;
    printf("input first number: ");
    scanf("%d", &num1);
    printf("input second number: ");
    scanf("%d", &num2);
    difference = abs(num2- num1) ;
    printf("The difference of %d and %d is %d\n", num1 num2, difference);
    return 0;
}
