#include <stdio.h>

double triangle(double,double);

void main(){
    double teihen,takasa;   //  底辺と高さを入れる変数
    double menseki;     //  三角形の面積
    printf("底辺=");
    scanf("%lf",&teihen);       //  1つ目の数、aを入力
    printf("高さ=");
    scanf("%lf",&takasa);       //  2つ目の数、bを入力
    menseki=triangle(teihen,takasa);
    printf("面積%f",menseki);
}

double triangle(double l,double m){
    double men = (l * m) / 2.0;
    return men;
}