#include <stdio.h>

int stars(int);
  
void main(){
    int n,i;
    printf("�\\������񐔂���͂��Ă�������:");
    scanf("%d",&n);
    stars(n);
}

int stars(int hosi){
    if(hosi > 0){
        for(int i = 0;i < hosi;i++){
            printf("��");
        }
        printf("\n");
    }else{
        printf("0���傫���l����͂��Ă��������B\n");
    }
}