#include <stdio.h>

int stars(int);
  
void main(){
    int n,i;
    printf("•\\Ž¦‚·‚é‰ñ”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d",&n);
    stars(n);
}

int stars(int hosi){
    if(hosi > 0){
        for(int i = 0;i < hosi;i++){
            printf("š");
        }
        printf("\n");
    }else{
        printf("0‚æ‚è‘å‚«‚¢’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    }
}