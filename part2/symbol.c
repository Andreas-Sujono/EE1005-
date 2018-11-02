
#include <stdio.h>

void top(int);
void middle(int);
void bottom (int);

int x = 0;
int main(void){
    int width,height;
    printf("enter width: ");
    scanf("%d",&width);
    printf("enter height ( excluding border ): ");
    scanf("%d",&height);
    top(width);
    middle(height);
    bottom(width);
    return 0;
}

void top(int n){
    for(int i =0;i<n;i++){
        if(i==0||i==(n-1))
            printf("*");
        else
            printf("+");
    }
    printf("\n");
    x = n;
}

void middle(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j < x;j++){
            if(j ==0 || j == x-1)
                printf("%*.c",j,'|');
        }
        printf("\n");
    }
}

void bottom(int n){
    for(int i =0;i<n;i++){
        if(i==0||i==(n-1))
            printf("*");
        else
            printf("-");
    }
    printf("\n");

}

