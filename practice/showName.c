#include "showName.h"
#include <stdio.h>

extern char names[10][256];

//  生徒の名前の表示
void showName(int num)
{
    printf("%d:%s\n",num,names[num]);
}