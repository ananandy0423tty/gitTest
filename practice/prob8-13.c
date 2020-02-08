#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void main(){
    int len1[10];
    int len2[10];

      srand((unsigned)time(NULL));
      printf("”z—ñ1=");
      for(int i=1;i<=10;i++){
          len1[i] = rand() % 10 + 1;
          printf("%d ",len1[i]);
      }
      printf("\n”z—ñ2=");      
      for(int i=1;i<=10;i++){
          len2[i] = rand() % 10 +1;
          printf("%d ",len2[i]);
      }
      printf("\n‹¤’Ê=");
      for(int i=1;i<=10;i++){
          if(len1[i] == len2[i]){
              printf("%d ",i);
          }
      }printf("\n“ü‚Á‚Ä‚­‚é”=");
      for(int i=1;i<=10;i++){
              if(len1[i] > len2[i]){                  
                  printf("%d ",len2[i]); 
              }
      }
           
       


 


}