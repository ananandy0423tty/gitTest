#include "randlib.h"
 
//  �����̏�����
void init_rand()
{
    srand((unsigned) time(NULL));
}
//  �w�肵���͈̗͂����𔭐�
int getRand(int start,int end)
{
    return rand() % (end - start + 1) + start;
}