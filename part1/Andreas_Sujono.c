
/*
Name : Andreas Sujono
Matriculation ID : U1820063C
Group A06

*/
#include <stdio.h>
#include <math.h>

int main(void){

    float initial_velocity, radius , change_in_time,time ,x ,y, angular_velocity,nmax ;
    int n = 0 ;
    printf("input initial velocity : ");
    scanf("%f",&initial_velocity);
    printf("input radius  : ");
    scanf("%f",&radius);
    printf("input maximum number of steps : ");
    scanf("%f",&nmax);
    printf("input time interval : ");
    scanf("%f",&change_in_time);

    printf("t(s)      x(m)      y(m)\n");

    while(n <= nmax){
        time = n * change_in_time;
        angular_velocity = initial_velocity / radius;
        x = radius*cos(angular_velocity * time );
        y = radius*sin(angular_velocity * time);
        n = n + 1;
        printf("%-8.2f  %-8.3f  %-8.3f \n",time, x , y);

    }

    return 0;

}
