#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[5];
    int sum =0;
    int sum1;
    int avg;
    
    srand((unsigned)time(NULL));

    for(int i=0;i<5;i++){
       data[i] = rand() % 10 + 1;
       printf("%d ",data[i]);
    }
    printf("\n���v�l:");
    for(int i=0;i<5;i++){
        sum = sum + data[i];
    }
    printf("%d",sum);
    printf("\n���ϒl:");
    avg = sum / 5;
    printf("%d",avg);
    printf("\n���ϒl���傫��:");
    for(int i=0;i<5;i++){
        if(avg <= data[i]){
            printf("%d ",data[i]);
        }
    }
    printf("\n���ϒl��菬����");
    for(int i=0;i<5;i++){
        if(avg > data[i]){
        printf("%d ",data[i]);
        }
    }
}
    