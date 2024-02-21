#include <stdio.h>

typedef struct _Haha
{
    char name[16];
    int (*callback)(int, int);
    int arg1;
    int arg2;
} Haha;


static void DoWorkForHaha(Haha haha)
{
    if (!haha.callback) /* prevent from calling invalid function pointer */
        return 1;

    int result = haha.callback(haha.arg1, haha.arg2);
    printf("Result of %s is %d\n", haha.name, result);
}

static int MySum(int a, int b)
{
    return a + b;
}

static int MyMultiply(int a, int b)
{
    return a * b;
}

int main()
{
    Haha aaa;
    aaa.callback = MySum;
    aaa.arg1 = 3;
    aaa.arg2 = 3;
    strcpy_s(aaa.name, sizeof(aaa.name), "AAA");

    Haha bbb;
    bbb.callback = MyMultiply;
    bbb.arg1 = 3;
    bbb.arg2 = 3;
    strcpy_s(bbb.name, sizeof(bbb.name), "BBB");

    DoWorkForHaha(aaa);
    DoWorkForHaha(bbb);

    return 0;
}