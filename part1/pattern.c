
#include <stdio.h>

int main(void){

    int width,height;
    int count = 1;
    printf("enter two integer for height and width : ");
    scanf("%d %d",&height,&width);
    while(count <= width){
        printf("=");
        count++;
    }
    printf("\n");
    count = 1;
    while(count <= (height-2)){
        printf("* %*.c\n",(width-2),'*');
        count ++;
    }
    count = 1;
    while(count <= width){
        printf("=");
        count++;
    }

}
