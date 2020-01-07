#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int a;
    srand((unsigned)time(NULL));
    
    for(int i=1; i<=5; i++){
    a = rand() % 100 + 1;
    printf("%d\n",a);
    }    
}