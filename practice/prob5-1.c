#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int a[6];
    int a_rand;
    srand((unsigned)time(NULL));    

    for(int i=0;i<6;i++){
    a_rand = rand() % 10 + 1;
    printf("a[%d]=%d\n",i,a_rand);
    }




}