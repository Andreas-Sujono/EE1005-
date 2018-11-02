

#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    printf("input x : ");
    scanf("%f",&x);

    printf("exp(%.3f) = %.3f , ln(%.3f) = %.3f\n",x,exp(x),x,log(x));


    return 0;
}

