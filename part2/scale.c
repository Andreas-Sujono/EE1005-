
#include <stdio.h>
#include <math.h>

double scale(double,int);

int main()
{
    double num,ans;
    int power;

    printf("input number and power : ");
    scanf("%lf %d",&num,&power);

    ans = scale(num,power);
    printf("scale(%g,%d) : %g",num,power,ans);

}

double scale(double a , int b){
	return a * pow(10,b);
}
