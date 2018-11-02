/* program style.c for FE1008 hands-on          */
/* Name:                                      */
/* Group:                                     */
/* Date:                                      */

#include <stdio.h>
#define  P_CONST 3.14159

int main(void)
{
    /* declaration */
    double radius, area, circumference;

    /* get the input */
    printf("Enter the radius of the circle> ");
    scanf("%lf", &radius);

    /* compute area and circumference */

    area = P_CONST *radius *radius;
    circumference = 2.0 * P_CONST *radius;

    /* display the results */
    printf("radius of circle        = %.2lf\n", radius);
    printf("area of circle          = %.2lf\n", area);
    printf("circumference of circle = %.2lf\n",circumference);
      return 0;
      }
