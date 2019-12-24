#include <stdio.h>
int main(void){
    double one,two,three;
    double sum,avg;

    one=1.2,two=3.7,three=4.1;
    printf("%f %f %f\n",one,two,three);
    sum = one + two + three;
    avg = sum / 3.0;
    printf("合計値：%f\n",sum);
    printf("平均値：%f\n",avg);

    printf("\n\n\n\n\n\n\n");

    double d[3];
    double sum2,avg2;
    int i;

    d[0] = 1.2;
    d[1] = 3.7;
    d[2] = 4.1;
    sum = 0.0;
    for(i=0;i<3;i++){
        printf("%f\n",d[1]);
        sum2 += d[1];
    }
    printf("\n");
    avg = sum /3.0;
    printf("蜷郁ｨ亥､?ｼ?%f\n",sum2);
    printf("蟷ｳ蝮?蛟､?ｼ?%f\n",avg2);

    return 0;
}