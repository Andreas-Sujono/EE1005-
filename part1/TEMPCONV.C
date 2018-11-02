
/*convert temperature readings from degrees Celsius (C) to degrees Fahrenheit (F). */

#include <stdio.h>

int main (void){

    float C, F ;
    printf("input temperature in celcius : ");
    scanf("%f", &C);
    F = (9.0/5)*C + 32;
    printf("temperature in celcius : %.3f \ntemperature in fahrenheit : %.3f",C,F);
    return 0;

}
