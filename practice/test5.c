#include <stdio.h>
int main(void){

    int i;
    for(i=0;i<=5;i++){
        printf("%d",i);
    }
    printf("\n\n");

int a,b;
    for(a =1;a<=2;a++){
        for(b=1;b<=3;b++){
            printf("%d+%d=%d",a,b,a+b);
        }
        printf("\n\n");
    }


    return 0;
}