#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(void){
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    printf("”:%d",a);
    for(int i=1;i<=a;i++){
        printf("¡");
    }
    
}