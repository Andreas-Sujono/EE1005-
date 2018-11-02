
/* Calculate and display the current in a series circuit  */
#include <stdio.h>
int main(void)
{
    int R1,R2,R3,V,I;
    printf("input R1 : ");
    scanf("%d",&R1);
    printf("input R2 : ");
    scanf("%d",&R2);
    printf("input R3 : ");
    scanf("%d",&R3);
    printf("input V : ");
    scanf("%d",&V);

    I = V/(R1+R2+R3);
    printf("the value of I : %d",I);
}
