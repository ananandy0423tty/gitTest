#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int a;
    srand((unsigned)time(NULL));
    a = rand() % 10 + 1;
    if(a>=5){
        for(int i=1;i<=a;i++){
            printf("��");
        }
    }else{
        printf("����������:%d",a);
    }
}