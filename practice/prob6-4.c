#include <stdio.h>

int numJudge(int);
  
void main(){
    int a;
    printf("�����l����͂��Ă��������F");
    scanf("%d",&a);
    numJudge(a);

}

int numJudge(int num){
    if(num == 0){
        printf("0�ł�");
    }else if(num %2 == 0){
        printf("�����ł�");
    }else{
        printf("��ł�");
    }
}