
#include <stdio.h>
void split(double d, double*address) ;

int main(void){
    double d;
    printf("enter a floating number: ");
    scanf("%lf",&d);
    split(d,&d);
}

void split(double d,double * address) {

    printf("int part: %d", (int)*address);
    printf("\nfrac part: %g", d- (int)*address);
}
