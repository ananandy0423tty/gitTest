#include <stdio.h>
int main(void){
    int num;
    printf("負のループで抜ける");

    while(1){
        printf("数値を入力");
        scanf("%d",&num);
        if(num < 0){
            break;
        }

    }
    return 0;
}