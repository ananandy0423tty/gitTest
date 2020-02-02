#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main(void){
    int a;
    int keta=0;

    srand((unsigned)time(NULL));
    a = rand() % 1000 + 1;
    printf("%d",a);

    while (a != 0){
        a = a /10;
        ++keta;
    }
    printf("\n%d",keta);
}

