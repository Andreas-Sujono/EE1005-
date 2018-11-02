
#include <stdio.h>
double repay(int);

int main()
{
	printf("repayment amount for interest every month : %lf\n",repay(12));
	printf("repayment maount for interest every day : %lf\n",repay(365));
}

double repay(int n){
	double sum = 1;
	int i ;
	for( i = 1 ; i<= n ; i++){
		sum = sum* (1+1.0/n);
	}
	return sum;
}
