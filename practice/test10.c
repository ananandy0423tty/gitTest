#include <stdio.h>
int main(void){
    int n[] = {5,4,3,2,1};
    int i;
    for(i=0;i<5;i++){
        printf("n[%d]=%d ",i,n[i]);
    }
    printf("\n\n");

    char s1[4] = {'a','b','c','\n'};
    char s2[] = "HelloWorld.";
    char s3[10];

    printf("文字列の入力");
    scanf("%s",&s3);
    printf("s1 = %s\n",s1);
    printf("s2 = %s\n",s2);
    printf("s3 = %s\n",s3);

    return 0;
}