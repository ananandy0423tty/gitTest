#include <stdio.h>

void main(){
    int num;

      for(num =1;num<=100;num++){
          if(num % 3 ==0 || num % 3 == 3){
              printf("\n%d",num);
          }
      }
}