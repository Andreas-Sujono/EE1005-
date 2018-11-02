
#include <stdio.h>
#include <math.h>

int main(void)
{
    float num;
    printf("enter a number : ");
    scanf("%f",&num);
    printf("positive value to the nearest integer is %f is %f",num,floor(num+0.5));

    return 0;
}

