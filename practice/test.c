#include <stdio.h>
int main(void){
    int i = 0;
    int t = 0;

    while(i<=5){
        i++;
        printf("%d",i);
    }
    printf("\n\n");

    do{
        t++;
        printf("%d",t);
    }while(t<=5);
    printf("\n\n");
    return 0;
}