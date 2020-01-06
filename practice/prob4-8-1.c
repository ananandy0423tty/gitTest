#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int a=1;
    srand((unsigned)time(NULL));

    while (a != 10)
    {

        a = rand() % 10 + 1;
        printf("%d\n", a);
    }
    printf("èIóπ");
}