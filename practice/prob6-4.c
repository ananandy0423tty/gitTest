#include <stdio.h>

int numJudge(int);
  
void main(){
    int a;
    printf("整数値を入力してください：");
    scanf("%d",&a);
    numJudge(a);

}

int numJudge(int num){
    if(num == 0){
        printf("0です");
    }else if(num %2 == 0){
        printf("偶数です");
    }else{
        printf("奇数です");
    }
}