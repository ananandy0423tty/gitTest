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
    printf("\n5以上の数:");
    for(int i =0;i<10;i++){
        if(data[i]>=5){
            printf("%d ",data[i]);
        }
    }
    printf("\n5未満の数:");
    for(int i=0;i<10;i++){
        if(data[i]<5){
            printf("%d ",data[i]);
        }
    }
}
