#include <stdio.h>

void main(){

    int a,b,c;
    int a1,b1,c1;


    for(a=1;a<=100;a++){
        for(b=1;b<=100;b++){
            for(c=1;c<=100;c++){
                a1=a*a;
                b1=b*b;
                c1=c*c;
                if(a1+b1==c1){
                    if(a1<=b1){
                        printf("\na1=%d b1=%d c1=%d",a1,b1,c1);
                    }
                }        
            }
        }
    }

}