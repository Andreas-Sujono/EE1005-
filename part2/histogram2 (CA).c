
#include <Stdio.h>

void dataEntry(int index, int array[]);
void dataPlot(int index, int array[]);

int main(void){
    int index;
    do{
    printf("how many data you want to enter: ");
    scanf("%d",&index);
    } while(index > 20);

    int array[index];
    dataEntry(index,array);

    return 0;
}

void dataEntry(int index, int array[]){
    for(int i = 0 ; i < index; i ++){
        do{
        printf("data %d : ",i+1);
        scanf("%d", &array[i]);
        } while(array[i] > 10);
    }
    dataPlot(index, array);
}

void dataPlot(int index, int array[]){
    printf("index\tdata\t\thistogram\n");
    for(int i = 0 ; i < index; i ++){
        printf("%3d\t%3d",i + 1, array[i]);

        if(array[i] > 0){
            printf("%11c",'|');
            for(int j = 0 ; j < abs(array[i]) ; j ++){
                    printf("%c",'+');
            }
        }
        else{
            printf("%*c",(11-abs(array[i])),'+');
            for(int j = 1 ; j < abs(array[i]) ; j ++){
                    printf("%c",'+');
            }
            printf("|");
        }
        printf("\n");
    }

}

