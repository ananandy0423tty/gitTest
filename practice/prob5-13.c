#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[3][3];
    int data_max=0;
    int data_min;
        
    srand((unsigned)time(NULL));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            data[i][j]=i+j;
            data[i][j] = rand() % 9 + 0;
            printf("%d ",data[i][j]);

            if(data_max <= data[i][j]){
                data_max = data[i][j];
            }else if(data_min >= data[i][j]){
                data_min = data[i][j];
            }
        }
        printf("\n");
    }
    printf("Å‘å’l:%d",data_max);
    printf("\nÅ¬’l:%d",data_min);
}