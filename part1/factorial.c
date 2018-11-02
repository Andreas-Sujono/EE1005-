
#include <stdio.h>

int main(void){

    int num;
    double result = 1;
    printf("enter a number :");
    scanf("%d",&num);
    if(num>=0){
        for ( int counter = 1 ; counter <=num ; counter++){
            result *=counter;
        }
        printf("the factorial of %d is %d",num,result);
    }
    else{
        printf("there is no factorial result of negative number");
    }
    return 0 ;
}
