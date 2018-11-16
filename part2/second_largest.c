
#include <stdio.h>
#define Asize 10

int second (int a[], int size);

int main(void){

    int x[Asize] = { 10,2,3,4,12,6,7,8,5,1};
    printf("second largest is: %d", second(x,Asize));

    return 0;
}

int second (int a[], int size){
    int largest = a[0];
    int largest2 = a[0];
    int indexMax = 0;
    for(int i = 1 ; i < size; i++){
        if( a[i] > largest){
            largest = a[i];
            indexMax = i;
        }
    }
    if( indexMax == 0)
         largest2 = a[1];

    for(int i = 1 ; i < size; i++){
        if( a[i] > largest2 && i !=indexMax)
            largest2 = a[i];
    }
    return largest2;
}


