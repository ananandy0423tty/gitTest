#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[10];
    
    srand((unsigned)time(NULL));

    for(int i=0;i<10;i++){
       data[i] = rand() % 10 + 1;
       printf("%d ",data[i]);
    }
    printf("\nŠï”‚Í:");
    for(int i =0;i<10;i++){
        if(data[i] % 2 == 1){
            printf("%d ",data[i]);
        }
    }
    printf("\n‹ô”‚Í");
    for(int i =0;i<10;i++){
        if(data[i] % 2 ==0){
            printf("%d ",data[i]);
        }
    }
}