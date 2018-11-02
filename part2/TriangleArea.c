
#include <stdio.h>
#include <math.h>

int istriangle ( double,double,double);
double areatri (double,double,double);

int main(void){

	double a,b,c;

	printf ( "input a,b,c : ");
	while( scanf("%lf %lf %lf",&a,&b,&c) != EOF){
		if( istriangle(a,b,c)){
			printf("area : %lf\n",areatri(a,b,c));
		}
		else{
			printf("it is not a triangle\n");
		}
		printf ( "input a,b,c : ");
	}
}

int istriangle( double a, double b, double c){
	if( a > 0 && b > 0 && c >0){
		if(a+b > c && a+c > b && b+c >a){
			return 1;
		}
	}
	else
		return 0;
}

double areatri (double a ,double b, double c){
	double s = (a+b+c)/2;
	double ans = sqrt(s*(s-a)*(s-b)*(s-c));

	return ans;
}
