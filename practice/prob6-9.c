#include <stdio.h>

int square(int,int);

int main(){
    
    int l;
    int w;
    printf("�c");
    scanf("%d",&l);
    printf("��");
    scanf("%d",&w);
    square(l,w);    
}

int square(int l,int w){
    for(int i=0;i<l;i++){
        for(int i=0;i<w;i++){
            printf("��");
            if(l <0 || w <0){
                printf("");
            }
        }
        printf("\n");
    }
}