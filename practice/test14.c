#include <stdio.h>

int max(int,int);
void show(int);
void line();

void main(){
    int n1 = 4,n2 = 5;
    line();
    show(n1);
    show(n2);
    printf("2‚Â‚Ì‚¤‚¿‘å‚«‚¢”‚Í%d‚Å‚·B\n",max(n1,n2));
    line();
}

int max(int a,int b){
    if(a >b){
        return a;
    }
    return b;
}

void show(int n){
    printf("”’l:%d\n",n);
    return;
}
void line(){
    printf("****************");
}