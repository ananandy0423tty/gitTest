#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(void){
    int a;
    int i=1;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    printf("”‚Í:%d",a);
    do{
        printf("¡");
        i++;
    }while(i<=a);
    printf("\n");

}