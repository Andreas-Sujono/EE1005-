/* Distance travelled by a particle falling under gravity.*/
#include <stdio.h>

int main (void){

    double time = 0, max_time = 4, interval = 0.5, acceleration = 9.8, distance,initial_velocity;
    printf("Time Elapsed Distance Travelled\n" );
    printf("--------------------------------\n" );
    printf("input initial velocity : ");
    scanf("%lf",&initial_velocity);
    while (time <= max_time)
    {
    distance = initial_velocity*time+ 0.5*acceleration*time*time;
    printf("%8.2f %8.2f\n", time, distance);
    time = time + interval;
    }
    return 0;

}
