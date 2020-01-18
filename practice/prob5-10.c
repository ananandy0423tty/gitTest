#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[5];
    int count =0;
    
    srand((unsigned)time(NULL));

    for(int i=0;i<5;i++){
       data[i] = rand() % 10 + 1;
       printf("%d ",data[i]);
    }
    
    printf("\n");
    for(int i=0;i<data[0];i++){        
            printf("* ");
    }

    printf("\n");
    for(int i=0;i<data[1];i++){
        printf("* ");
    }

    printf("\n");
    for(int i=0;i<data[2];i++){
        printf("* ");
    }

    printf("\n");
    for(int i=0;i<data[3];i++){
        printf("* ");
    }

    printf("\n");
    for(int i=0;i<data[4];i++){
        printf("* ");
    }

}