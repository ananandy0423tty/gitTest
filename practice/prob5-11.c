#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[5];
    int count =0;
    
    srand((unsigned)time(NULL));

    for(int i=0;i<5;i++){
       data[i] = rand() % 100 + 1;
       printf("%d ",data[i]);
    }

    printf("\n0�ȏ�60����:");
    for(int i=0;i<5;i++){
        if(data[i] >=0 && data[i] <60){
            printf("%d ",data[i]);
        }
    }

    printf("\n60�ȏ�80����:");
    for(int i=0;i<5;i++){
        if(data[i]>=60 && data[i] <70){
            printf("%d ",data[i]);
        }
    }

    printf("\n80�ȏ�:");
    for(int i=0;i<5;i++){
        if(data[i] >= 80){
            printf("%d ",data[i]);
        }
    }
}