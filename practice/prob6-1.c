#include <stdio.h>
  
//  �֐��̃v���g�^�C�v�錾
int add(int,int);
int sub(int,int);
 
void main(){
    int a,b;
    int result;
    int result2;
    printf("a=");
    scanf("%d",&a);     //  1�ڂ̐��Aa�����
    printf("b=");
    scanf("%d",&b);     //  2�ڂ̐��Ab�����
    result = add(a,b);  //  3�ڂ̐��Ac�����
    result2 = sub(a,b);
    printf("%d + %d = %d\n",a,b,result);    //  �v�Z���ʂ��o��
    printf("%d - %d = %d\n",a,b,result2);
}
 
//  ��̐����̘a�����߂�֐�
int add(int n1,int n2){
    return n1 + n2;
}
int sub(int n1,int n2){
    return n1-n2;
}