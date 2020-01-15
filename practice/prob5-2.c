#include <stdio.h>

int main(void){
    double d[4];

    d[0]=1.2;
    d[1]=-1.3;
    d[2]=5.2;
    d[3]=4.8;

    for(int i=0;i<4;i++){
        printf("d[%d]=%f\n",i,d[i]);
    }

}