#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(void){
    int a;
    srand((unsigned)time(NULL));
    while(a!=100){
        a = rand() % 100 + 1;
        printf("%d\n",a);
        if(a%10==0){
            break;
        }
    }
    printf("èIóπ");
}