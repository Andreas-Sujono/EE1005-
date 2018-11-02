/* This program computes the duration of flight and the height
 * above the target of a projectile. */

#include <stdio.h>
#include <math.h>

/* macro definition for gravitational constant G=9.81 */
#define G 9.81

/* Prototypes */
void instruct(void);
double flighttime (double , double , double );
double flightht (double , double , double );

int main(void)
{
     double theta,distance,velocity,time,height;
     instruct();
    printf("theta (in radian) : ");
    scanf("%lf",&theta);
    printf("velocity (in m/s) : ");
    scanf("%lf",&velocity);
    printf("distance (in m) : ");
    scanf("%lf",&distance);

    time = flighttime(distance, velocity , theta);
    height = flightht(velocity, theta, time);

    printf("time of flight: %lf second\n",time);
    printf("height: %lf m",height);

    return 0;
}
/* This function displays a set of user instructions. */
void instruct(void)
{
    printf("Enter the angle, velocity, and distance of the target \n\n");
}
 /* This function calculates the flight time. */
double flighttime (double dist, double vel, double theta)
{
    return dist/(vel*cos(theta));
}
/* This function calculates the height. */
double flightht (double vel, double theta, double time)
{
    return vel*sin(theta)*time - 0.5 * G * time*time;
}
