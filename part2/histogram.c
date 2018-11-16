
#include <Stdio.h>

int main(void){

    int n[10] = { 18, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    printf("Elements\tvalue\thistogram\n\n");
    for(int i = 0 ; i < 10 ; i ++){
        printf("   %d\t\t%d\t",i,n[i]);
        for(int j = 0; j < n[i]; j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
