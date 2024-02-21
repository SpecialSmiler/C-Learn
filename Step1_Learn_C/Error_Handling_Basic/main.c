#include <stdio.h>
#include <stdlib.h>

void print_array(int* pArr, int size)
{
    if (!pArr)
    {
        printf("pArr is NULL!!!\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", pArr[i]);
    }
    printf("\n");
}

void create_and_fill_array(int** pArr, int size, int value)
{
    if (!pArr)
    {
        printf("Hey! Something error!\n");
        return;
    }
    if (size <= 0)
    {
        printf("size should greater than zero!!!!\n");
        return;
    }

    for (int i = 0; i < size; i++)
    {
        pArr[i] = value;
    }
}

void learn_bad_goto(int** pArr)
{
    /* The code that has `goto` is hard to read. Especially for going back
       to previous line. */
    int i = 0;
HAHA:;
    *pArr = (int*)malloc(sizeof(int) * 4);
    if (i < 10)
    {
        printf("i = %d\n", i);
        i++;
        goto HAHA;
    }
    free(pArr);
}

int learn_good_goto(int** pArr, int size, int specialNumber)
{
    if (!pArr || *pArr)
        return 1;

    int* tempArr = 0;
    tempArr = (int*)malloc(sizeof(int) * size);
    if (!tempArr)
        return 1;

    int iErr = 0;

    if (specialNumber % 2 != 0) /* We don't want odd number */
    {
        iErr = 1;
        goto F_END;
    }

    if (specialNumber <= 0) /* We don't don't want number that less or equal to zero */
    {
        iErr = 1;
        goto F_END;
    }

    for (int i = 0; i < size; i++)
    {
        tempArr[i] = specialNumber;
    }

    *pArr = tempArr;

F_END:;
    if (iErr)
    {
        free(tempArr);
    }
    return iErr;
}

int main()
{
    //int* b = NULL;

    //print_array(b, 10);

    //int* c = NULL;
    //learn_bad_goto(&c);

    int* myArr = 0;
    const int myArrSize = 10;
    if (!learn_good_goto(&myArr, myArrSize, 2))
    {
        print_array(myArr, myArrSize);
        free(myArr);
    }

    return 0;
}