#include <stdio.h>
int main(void){
    printf("Hello");
    printf("こんにちは、私の名は%sです。\n年齢は%dです","あんでー",25);
    printf("\n\n");
    
    int a;
    printf("数値を入力:");
    scanf("%d",&a);
    if(a>0){
        printf("入力した値は正の数\n");
    }
    return 0;
}