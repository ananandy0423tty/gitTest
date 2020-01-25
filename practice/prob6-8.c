#include <stdio.h>
#include <stdlib.h>

int get_abs(int);

int main(){
    int z_get;
    int h_abs;

    printf("“ü—Í");
    scanf("%d",&z_get);
    h_abs =abs(z_get);
    printf("%d",h_abs);
}

int get_abs(int here){
    int h_get;
    h_get = abs(here);
    return h_get;
}