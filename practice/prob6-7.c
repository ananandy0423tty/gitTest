#include <stdio.h>

double circ(double);
double area(double);

int main(){

    double hankei;
    printf("“ü—Í:");
    scanf("%lf",&hankei);
    circ(hankei);
    area(hankei);
}

double circ(double han){
    double en;
    double pi =3.14;
    en = han * 2.0 * pi;
    printf("%lf",en);
    return en;
}

double area(double han){
    double men;
    double pi = 3.14;
    men = han * han * pi;
    printf("\n%lf",men);
    return men;
}