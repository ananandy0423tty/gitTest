#include <stdio.h>

void numJudge(int mun);
  
void main(){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    numJudge(a);
}

void numJudge(int num){
    if(num == 0){
        printf("0やで");
    }else if(num % 2 == 0){
        printf("偶数やで");
    }else{
        printf("奇数やで");
    }
}