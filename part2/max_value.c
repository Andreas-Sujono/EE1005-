
#include<stdio.h>
#define size 10

void print_array(int a[ ], int arraysize);
int max_array(const int a[ ], int arraysize);


int main(void){
    int a[size] = {1, 2, 0, 0, 4, 5, 6, 9, 9, 17};
    print_array(a,size);
    printf("\nthe max value is : %d",max_array(a,size));
    return 0;
}

void print_array(int a[ ], int arraysize){
    printf("elements: ");
    for(int i =0; i < arraysize; i ++){
        printf("%d ",a[i]);
    }

}
int max_array(const int a[ ], int arraysize){
    int max = a[0];
    for(int i = 1 ; i < arraysize; i++){
        if( a[i] > max)
            max = a[i];
    }
    return max;
}
