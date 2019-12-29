#include <stdio.h>

int ans(int a,int b,int c){
    int d=(a+b+c);
    return d;
}

int main(void){
    int d1,d2,d3;
    int o=3,p=1,q=4,r=8,s=6;

    d1=ans(o,r,s);
    d2=ans(q,s,r);
    d3=ans(r,r,r);

    printf("d1=%d,d2=%d,d3=%d\n",d1,d2,d3);
}

