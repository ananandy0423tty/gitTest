#include <stdio.h>

int gcd(int,int);
int lcm(int,int);

void main(){
    int one,two;
    int kei;
        
    printf("ˆê‚Â–Ú");
    scanf("%d",&one);
    printf("“ñ‚Â–Ú");
    scanf("%d",&two);

    gcd(one,two);
    kei = lcm(one,two);
    printf("\nÅ¬Œö”{”%d",kei);
}

int gcd(int one,int two){
        int big;
        if(one<two){
        big = one;
        one = two;
        two = big;
    }
    big = one % two;
    while (big != 0){
        one = two;
        two = big;
        big = one % two;
    }
    printf("Å‘åŒö–ñ”%d",two);
}

int lcm(int one,int two){
    int one1,min,min1,kei;
    min1 = one * two;
    if(one < two){
        one1 = one;
        one = two;
        two = one1;
    }

    min = one % two;
    while(min != 0){
        one=two;
        two=min;
        min = one % two;        
    }
    kei = min1 / two;
    return kei;
}