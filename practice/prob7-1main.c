#include <stdio.h>
#include "prob7-1calulation.c"
 
void main(){
    int n1,n2;
    int r1,r2;
    printf("n1=");
    scanf("%d",&n1);
    printf("n2=");
    scanf("%d",&n2);
    r1 = div(n1,n2);    //  ���͂���2�̐����l�̏������߂�
    r2 = mod(n1,n2);    //  ���͂���2�̐����l�̊���Z�̗]������߂�
    printf("%d / %d = %d �]�� %d\n",n1,n2,r1,r2);
}
