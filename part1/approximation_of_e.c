
#include <stdio.h>

int main(void){

    int n ;
    int counter = 0;
    double result=0;
    printf("input n : ");
    scanf("%d",&n);

    while(counter < n){
        int factorial = 1;
        for ( int x = 1 ; x <=counter ; x++){
            factorial *=x;
        }
        result += 1.0/factorial;
        counter++;
    }
    printf("result is %.20lf",result);

    return 0 ;
}
