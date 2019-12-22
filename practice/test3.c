#include <stdio.h>
int main(void){

int dice;

printf("1‚©‚ç6‚ð“ü—Í");
scanf("%d",&dice);

if(1 <= dice && dice <=6){
    if(dice ==2 || dice==4 || dice ==6){
        printf("’š‚Å‚·B\n");
    }else{
        printf("”¼‚Å‚·\n");
    }
}else{
    printf("1‚©‚ç6‚ð“ü—Í");
}
return 0;
}