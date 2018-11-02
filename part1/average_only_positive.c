
#include <stdio.h>
#include <stdlib.h>

int main(void){


    int n ,num,result = 0,counter =0;
    printf("How many numbers to process? ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        printf("enter a number : ");
        scanf("%d",&num);
        if(num >= 0){
            counter++;
            result += num;
        }
    }
    if( result == 0 ){
        printf("No positive numbers to sum or average");
    }
    else{
        printf("there is %d positive number\n",counter);
        printf("the sum of positive number is %d\n",result);
        printf("the average of positive number is %.2lf",(double)result / counter);
    }

    return 0;
}
