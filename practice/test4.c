#include <stdio.h>
int main(void){
    int num;

    printf("1����3����͂��Ă�������");
    scanf("%d",&num);

    switch(num){
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("�s�K�؂Ȓl�ł���");
    }

return 0;
}