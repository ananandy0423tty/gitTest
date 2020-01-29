#include "randlib.h"
 
//  —”‚Ì‰Šú‰»
void init_rand()
{
    srand((unsigned) time(NULL));
}
//  w’è‚µ‚½”ÍˆÍ‚Ì—”‚ğ”­¶
int getRand(int start,int end)
{
    return rand() % (end - start + 1) + start;
}