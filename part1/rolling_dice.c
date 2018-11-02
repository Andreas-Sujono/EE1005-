
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand((unsigned) time(NULL));
    for(int i = 0 ; i< 100 ; i++){
        printf("random %d = %d\n",i,rand()%6+1);
    }
    return 0;
}

