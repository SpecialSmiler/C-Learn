#include <stdio.h>

static void bitwise_shift()
{
    int a = 123;
    int b1 = a * 2;
    int b2 = a << 1;

    printf("b1 = %d\n", b1);
    printf("b2 = %d\n", b2);

    short width1 = 1920;
    short height1 = 1080;
    int haha = 0;
    haha = width1 << 16;
    haha |= height1;

    short width2 = haha >> 16;
    short height2 = haha;

    printf("width2 = %d\n", width2);
    printf("height2 = %d\n", height2);

}

int main()
{
    bitwise_shift();
    return 0;
}