#include <stdio.h>
#include <math.h>

double poly(double);
double a,b,c,d,p,q,step,n,tolerance;

int main(void){
    double left,right;
    printf("enter the coefficient of a,b,c,d: \n");
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    printf("enter interval endpoints of p and q: \n");
    scanf("%lf %lf",&p,&q);
    printf("enter the step size: \n");
    scanf("%lf",&step);
    printf("enter the tolerence number: \n");
    scanf("%lf",&tolerance);
    n = (q-p)/step ;

    int k = 0;
    while(k <= n-1 ){
        left= p + k*step;
        right=p + (k+1)*step;
        check_roots(left,right);
        k++;
    }
    return 0;
}
void check_roots(double left,double right){
    double f_left = poly(left);
    double f_right = poly(right);

    if(fabs(f_left) <= tolerance)
        printf("roots : %lf\n",left);
    else if( f_left*f_right < 0)
        printf("rotts : %lf\n",(left+right)/2);
}

double poly(double x){
    return (a*x*x*x) + (b*x*x) +(c*x) + d;
}
