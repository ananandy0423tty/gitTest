#include <stdio.h>
int main(void){
    int i,num;

    printf("�񐔂����");
    scanf("%d",&num);

    printf("while�Ŏ��s\n");
    i =1;
    while(i <= num){
        printf("*");
        i++;
    }
    printf("\n\n");
    printf("do�`while�Ŏ��s\n");
    i =1;
    do{
        printf("*");
        i++;
    }while(i <= num);
    printf("\n");

    return 0;
}
