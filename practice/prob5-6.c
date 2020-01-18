#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[10];
    int data_max =0;
    int data_min;
    
    srand((unsigned)time(NULL));

    for(int i=0;i<10;i++){
       data[i] = rand() % 10 + 1;
       printf("%d ",data[i]);       
    }
    printf("\nÅ‘å’l:");
    for(int i=0;i<10;i++){
        if(data_max < data[i]){
            data_max = data[i];
        }
    }
    printf("%d",data_max);

    printf("\nÅ¬’l:");
    for(int i=0;i<10;i++){
        if(data_min > data[i]){
            data_min = data[i];
        }
    }
    printf("%d",data_min);
}
