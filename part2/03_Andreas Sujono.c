/*
    name: Andreas Sujono
    Matric number: U1820063C
    PC number : 03
*/

#include<stdio.h>
void draw_downTriangle(int);
void draw_upTriangle(int);

int space = 0;

int main(void){
    int top;
    printf("enter the top base length: ");
    scanf("%d",&top);
    //check: number must be odd and < 80
    while( top % 2 == 0 || top > 80 || top<0){
        printf("sorry, even number and number > 80 is not acceptable\n");
        printf("re-enter the top base length: ");
        scanf("%d",&top);
    }

    draw_downTriangle(top);
    draw_upTriangle(top);

    return 0;
}

void draw_downTriangle(int top){
     for(int i = top; i >=1 ; i-=2 ){
        space++;
        if(i == 1)
            printf("%*.c%c\n",space,' ','*');

        else{
            printf("%*.c",space,' ');
            for(int j = 0; j < i; j ++)
                printf("x");
            printf("\n");
        }
    }
    space --;
}

void draw_upTriangle(int bottom){
    for(int i = 3; i <= bottom; i += 2){
         printf("%*.c",space,' ');
            for(int j = 0; j < i; j ++){
                printf("+");
            }
            printf("\n");
        space--;
     }
}
