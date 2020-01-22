#include <stdio.h>

int numJudge(int);
  
void main(){
    int a;
    printf("®”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%d",&a);
    numJudge(a);

}

int numJudge(int num){
    if(num == 0){
        printf("0‚Å‚·");
    }else if(num %2 == 0){
        printf("‹ô”‚Å‚·");
    }else{
        printf("Šï”‚Å‚·");
    }
}