#include <stdio.h>
int main(void){

int dice;

printf("1����6�����");
scanf("%d",&dice);

if(1 <= dice && dice <=6){
    if(dice ==2 || dice==4 || dice ==6){
        printf("���ł��B\n");
    }else{
        printf("���ł�\n");
    }
}else{
    printf("1����6�����");
}
return 0;
}