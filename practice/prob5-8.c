#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int data[5];
    int count =0;
    int big_count =0;
    int sml_count =0;

    srand((unsigned)time(NULL));

    for(int i=0;i<5;i++){
       data[i] = rand() % 10 + -10;
       printf("%d ",data[i]);
    }
    printf("\n0���傫����:");
    for(int i=0;i<5;i++){
        if(data[i] >=0){
            big_count += 1;
        }
    }
    printf("%d ",big_count);

    printf("\n0��菬������:");
    for(int i = 0;i<5;i++){
        if(data[i] < 0 ){
            sml_count +=1;
        }
    }
    printf("%d ",sml_count);

    printf("\n0�̐�:");
    for(int i=0;i<5;i++){
        if(data[i] == 0){
            count += 1;
        }
    }
    printf("%d ",count);
}