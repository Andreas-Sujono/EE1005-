
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    printf("input x : ");
    scanf("%f",&x);

    printf("ceil(%.3f) = %.3f , floor(%.3f) = %.3f\n",x,ceil(x),x,floor(x));

    return 0;
}


