#include <stdio.h>
#include "haha.h"

static int a = 10086;

int main()
{
    //int a = 999;
    DoWork();
    printf("main.c a = %d\n", a);
    return 0;
}