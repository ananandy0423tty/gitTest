#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[10];
    int count =0;
    
    srand((unsigned)time(NULL));

    for(int i=0;i<10;i++){
       data[i] = rand() % 100 + 0;
       printf("%d ",data[i]);
    }
    printf("\n50ˆÈã‚Ì”:");
    for(int i=0;i<10;i++){
        if(data[i]>=50){
            printf("%d ",data[i]);
        }
    }

    printf("\n50ˆÈ‰º‚Ì”");
    for(int i =0;i<10;i++){
        if(data[i] < 50){
            printf("%d ",data[i]);
        }
    }
}