#include <stdio.h>
  
//  �֐��̃v���g�^�C�v�錾
int mul(int,int,int);
 
void main(){
    int a,b,c;
    int result;
    printf("a=");
    scanf("%d",&a);     //  1�ڂ̐��Aa�����
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);     //  2�ڂ̐��Ab�����
    result = mul(a,b,c);  //  3�ڂ̐��Ac�����
    printf("%d * %d * %d= %d\n",a,b,c,result);    //  �v�Z���ʂ��o��
}
 
//  ��̐����̘a�����߂�֐�
int mul(int n1,int n2,int n3){
    return n1 * n2 * n3;
}