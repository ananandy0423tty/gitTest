#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main(){
    int len[10];

   srand((unsigned)time(NULL));
        
        for(int i=1;i<=10;i++){
            len[i] = rand() % 100 + 1;
            if(len[i] % 2 == 0){
                printf("����%d ",len[i]);
            }
        }
        printf("\n");
        for(int i =1;i<=10;i++){
            if(len[i] % 2 == 1){
                printf("�%d ",len[i]);
            }
        }
}