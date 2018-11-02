#include <stdio.h>
#define N 1000

double funct(double x);
double a, b, c, d, p, q;

int main(void)
{
    double result = 0;
    double deltaX;
    printf("enter the coefficient of a,b,c,d: \n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    printf("enter boundary limit of p and q: \n");
    scanf("%lf %lf",&p,&q);

    deltaX = (q-p)/N;
    for(int i = 0; i <= N-1 ; i++){
        result += (funct(p+i*deltaX)*deltaX);
    }
    printf("the result is %lf",result);
}
double funct(double x)
{
 return (a*x*x*x) + (b*x*x) +(c*x) + d;
}
