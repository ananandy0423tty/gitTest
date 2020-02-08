#include <stdio.h>

void main(){
    
    int a = 100;
    double b = 123.4;
    float c = 123.4f;
    char d = 'e';

    printf("a%d 大きさ%dbyte アドレス0x%x\n",a,sizeof(int),&a);
    printf("b%d 大きさ%dbyte アドレス0x%x\n",b,sizeof(double),&b);
    printf("c%d 大きさ%dbyte アドレス0x%x\n",c,sizeof(float),&c);
    printf("d%d 大きさ%dbyte アドレス0x%x\n",d,sizeof(char),&d);
    
}