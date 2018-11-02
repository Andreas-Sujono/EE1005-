

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    printf("input x : ");
    scanf("%f",&x);

    if(x>=0)
    printf("square root of %.3f = %.3f\n",x,sqrt(x));
    else
    printf("cannot compute root of negative number \n");


    return 0;
}

