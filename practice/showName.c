#include "showName.h"
#include <stdio.h>

extern char names[10][256];

//  ¶“k‚Ì–¼‘O‚Ì•\¦
void showName(int num)
{
    printf("%d:%s\n",num,names[num]);
}