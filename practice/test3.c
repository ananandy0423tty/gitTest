#include <stdio.h>
int main(void){

int dice;

printf("1から6を入力");
scanf("%d",&dice);

if(1 <= dice && dice <=6){
    if(dice ==2 || dice==4 || dice ==6){
        printf("丁です。\n");
    }else{
        printf("半です\n");
    }
}else{
    printf("1から6を入力");
}
return 0;
}