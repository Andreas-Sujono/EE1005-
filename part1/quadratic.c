

/* Calculate and display the root of quadaratic equation */
#include <stdio.h>
#include <math.h>
int main(void)
{
    float a,b,c;
    float root1, root2;
    printf("input a : ");
    scanf("%f",&a);
    printf("input b : ");
    scanf("%f",&b);
    printf("input c : ");
    scanf("%f",&c);

    if(a == 0 ){
        root1 = -c/b;
        printf("root is %8.3f", root1);
    }
    else if ( (b*b - 4*a*c) >= 0 ){
        root1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        root2 = (-b - sqrt(b*b-4*a*c))/(2*a);
        printf("root1 : %8.3f , root2 : %8.3f", root1, root2);
    }
    else{
        printf("cannot compute complex root");
    }

}
