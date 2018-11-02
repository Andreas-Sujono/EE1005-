
#include <stdio.h>

int main(void){

    int period;
    double amount , int_rate , interest;

    printf("enter the principal amount deposited (in $): ");
    scanf("%lf",&amount);
    printf("enter the basic annual interest rate (in %%): ");
    scanf("%lf",&int_rate);
    printf("enter the deposit period (in months): ");
    scanf("%d",&period);
    /*compute the interest*/
    if(period >= 15 && period < 24){
        interest =amount *(int_rate+1)/100.0*(period/12.0);
    }
    else if( period >=24){
        interest =amount *(int_rate+1.25)/100.0*(period/12.0);
    }
    else{
        interest =amount *(int_rate)/100.0*(period/12.0);
    }

    printf("the interest is %lf",interest);


}
