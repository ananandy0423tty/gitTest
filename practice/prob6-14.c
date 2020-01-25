#include <stdio.h>

int gcd(int,int);
int lcm(int,int);

void main(){
    int one,two;
    int kei;
        
    printf("一つ目");
    scanf("%d",&one);
    printf("二つ目");
    scanf("%d",&two);

    gcd(one,two);
    kei = lcm(one,two);
    printf("\n最小公倍数%d",kei);
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
    printf("最大公約数%d",two);
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