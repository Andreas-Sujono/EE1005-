
/*
    name: Andreas Sujono
    Matriculation card : U1820063C
    Group : A06
*/

#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void){
    float v0,theta0,time,x,y,totaltime;
    int nmax;
    float g = 9.81;
    float time_difference = 0.8;
    int counter = 0 ;


    printf("input initial velocity: ");
    scanf("%f",&v0);
    printf("input the initial angle: ");
    scanf("%f",&theta0);
    printf("input number of step: ");
    scanf("%d", &nmax);
    //convert theta from degree to radian
    theta0 = theta0*pi/180;

    totaltime = 2*v0*sin(theta0)/g;

    printf("t(s)   x(m)   y(m)   \n");
    while(counter <= nmax){
        time = counter * time_difference;
        x = v0*time*cos(theta0);
        y = v0*time*sin(theta0)-(1.0/2)*g*time*time;

        if(time > totaltime){
            x = v0*totaltime*cos(theta0); //x equals to maximum horizontal distance travelled
            printf("the ball have reached the ground at x= %.3f in %.3f s",x,totaltime);
            break;
        }
        else{
            printf("%.3f  %.3f  %.3f\n",time,x,y);
        }

        counter++;
    }

}
