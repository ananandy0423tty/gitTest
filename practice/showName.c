#include "showName.h"
#include <stdio.h>

extern char names[10][256];

//  ���k�̖��O�̕\��
void showName(int num)
{
    printf("%d:%s\n",num,names[num]);
}