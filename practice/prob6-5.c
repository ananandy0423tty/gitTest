#include <stdio.h>

int max(int,int);
  
void main(){
    int a,b;
    printf("1つ目の値を入力してください:");
    scanf("%d",&a);     //  1つ目の数、aを入力
    printf("2つ目の値を入力してください:");
    scanf("%d",&b);     //  2つ目の数、bを入力
    
    printf("%dと、%dのうち、大きい値は%dです。\n",a,b,max(a,b));
}

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}