#include <stdio.h>

void numJudge(int mun);
  
void main(){
    int a;
    printf("�����l����͂��Ă��������F");
    scanf("%d",&a);
    numJudge(a);
}

void numJudge(int num){
    if(num == 0){
        printf("0���");
    }else if(num % 2 == 0){
        printf("�������");
    }else{
        printf("����");
    }
}