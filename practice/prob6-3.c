#include <stdio.h>

double triangle(double,double);

void main(){
    double teihen,takasa;   //  ��ӂƍ���������ϐ�
    double menseki;     //  �O�p�`�̖ʐ�
    printf("���=");
    scanf("%lf",&teihen);       //  1�ڂ̐��Aa�����
    printf("����=");
    scanf("%lf",&takasa);       //  2�ڂ̐��Ab�����
    menseki=triangle(teihen,takasa);
    printf("�ʐ�%f",menseki);
}

double triangle(double l,double m){
    double men = (l * m) / 2.0;
    return men;
}