#include <stdio.h>

int stars(int);
  
void main(){
    int n,i;
    printf("表\示する回数を入力してください:");
    scanf("%d",&n);
    stars(n);
}

int stars(int hosi){
    if(hosi > 0){
        for(int i = 0;i < hosi;i++){
            printf("★");
        }
        printf("\n");
    }else{
        printf("0より大きい値を入力してください。\n");
    }
}