#include <stdio.h>

void numJudge(int mun);
  
void main(){
    int a;
    printf("®”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%d",&a);
    numJudge(a);
}

void numJudge(int num){
    if(num == 0){
        printf("0‚â‚Å");
    }else if(num % 2 == 0){
        printf("‹ô”‚â‚Å");
    }else{
        printf("Šï”‚â‚Å");
    }
}