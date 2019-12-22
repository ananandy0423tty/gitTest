#include <stdio.h>
int main(void){
       int i = 0;
       int j = 0;
       while(i <= 5){
           printf("%d",i);
           i++;
       }
       printf("\n\n");

       do{
           printf("%d",j);
           j++;
       }while(j<=5);
       printf("\n\n");
    return 0;
}