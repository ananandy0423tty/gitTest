#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "prob7-2randlib.c"
 
 
void main(){
    int i,num;
    init_rand();
    for(i = 0; i < 100; i++){
        num = getRand(-10,10);  //  -10から10までの乱数発生
        printf("乱数:%d\n",num);
    }
}
