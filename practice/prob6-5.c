#include <stdio.h>

int max(int,int);
  
void main(){
    int a,b;
    printf("1�ڂ̒l����͂��Ă�������:");
    scanf("%d",&a);     //  1�ڂ̐��Aa�����
    printf("2�ڂ̒l����͂��Ă�������:");
    scanf("%d",&b);     //  2�ڂ̐��Ab�����
    
    printf("%d�ƁA%d�̂����A�傫���l��%d�ł��B\n",a,b,max(a,b));
}

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}