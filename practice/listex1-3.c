#include <stdio.h>

void main(){
    
    int a = 100;
    double b = 123.4;
    float c = 123.4f;
    char d = 'e';

    printf("a%d �傫��%dbyte �A�h���X0x%x\n",a,sizeof(int),&a);
    printf("b%d �傫��%dbyte �A�h���X0x%x\n",b,sizeof(double),&b);
    printf("c%d �傫��%dbyte �A�h���X0x%x\n",c,sizeof(float),&c);
    printf("d%d �傫��%dbyte �A�h���X0x%x\n",d,sizeof(char),&d);
    
}