#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[3][3];
        
    srand((unsigned)time(NULL));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            data[i][j] = i+j;
            data[i][j] = rand() % 9 + 0;
            printf("%d ",data[i][j]);
        }
        printf("\n");    
    }
}