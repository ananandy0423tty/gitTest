#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int a=0;
    int a_max =0;
    srand((unsigned)time(NULL));
    for(int i=1;i<=5;i++){
        a = rand() % 100 + 1;
        printf("%d\n",a);
        if(a>=a_max){
            a_max=a;
        }
    }
    printf("MAX:%d",a_max);        
}