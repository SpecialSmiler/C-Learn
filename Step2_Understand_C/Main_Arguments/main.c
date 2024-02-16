#include <stdio.h>

int main(int argc, char** argv)
{
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    printf("\n");

    if (argc > 1)
    {
        if (strcmp(argv[1], "-haha") == 0)
        {
            printf("Hahahahahahahahhahah!\n");
        }
    }

    return 0;
}