#include "nameDB.h"
#include <string.h>

char names[10][256];

//  �f�[�^�̏�����
void init()
{
    // ���O�̃N���A
    int i;
    for(i = 0; i < 10; i++){
        strcpy(names[i],"");    //  ��������N���A
    }
}
//  ���k�̖��O�̐ݒ�
void setName(int num,char* name)
{
    //  ���O��o�^
    if(num >= 0 && num < 10){
        strcpy(names[num],name);
    }
}