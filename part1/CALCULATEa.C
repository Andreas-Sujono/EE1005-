

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float x;
    printf("input x : ");
    scanf("%f",&x);
    printf("fabs(%.3f) = %.3f\n",x,fabs(x));
    printf("abs(%.3f) = %d\n",x,abs(x));


    return 0;
}

