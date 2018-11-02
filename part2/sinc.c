
#include <stdio.h>
#include <math.h>

double sinc(double);

int main(void){
    double a,b,interval;
    printf("Enter endpoints a and b (a < b); eg -5 5: \n");
    scanf("%lf %lf",&a,&b);

    interval = (b-a)/20;
    printf("     x         sinc(x)\n");
    for(a;a <=b; a+=interval){
        printf("%.8lf %.8lf\n",a,sinc(a));
    }

    return 0;
}

double sinc(double x){
    return sin(x)/x;
}
