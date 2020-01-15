#include <stdio.h>

int main(void)
{
    int i;
    for(i=1;i<=100;i++){
        printf("%d ",i);
        if(i<=10){
            printf(" ");
        }
        if(i%10==0){
            printf("\n");
        }    
    }
}