
#include <stdio.h>
#include <math.h>
#define phi 3.14159265358979323846

int main(void)
{
    double a,b,angle,c;
    printf("input a : ");
    scanf("%lf",&a);
    printf("input b : ");
    scanf("%lf",&b);
    printf("input angle : ");
    scanf("%lf",&angle);

    c = sqrt(a*a+b*b-2*a*b*cos(angle*(2*phi)/360));
    printf("value of c is %.3lf",c);

    return 0;
}

