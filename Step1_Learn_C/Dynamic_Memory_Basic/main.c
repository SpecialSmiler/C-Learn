#include <stdio.h>
#include <stdlib.h>

typedef struct _DynamicIntArray
{
    int* data;
    int pos;
    unsigned int size;
} DynamicIntArray;


int array_init(DynamicIntArray* arr, unsigned initSize)
{
    if (!arr || initSize == 0)
        return 1;

    arr->data = (int*)malloc(initSize * sizeof(int));
    if (!arr->data)
    {
        return 1;
    }
    memset(arr->data, 0, sizeof(arr->data));
    arr->pos = 0;
    arr->size = initSize;

    return 0;
}

int array_append(DynamicIntArray *arr, int value)
{
    if (!arr)
        return 1;

    if (arr->pos == arr->size)
    {
        arr->data = (int*)realloc(arr->data, arr->size * 2 * sizeof(int));
        if (!arr->data)
            return 1;
        arr->size *= 2;
    }

    arr->data[arr->pos] = value;
    ++arr->pos;
    return 0;
}

int array_destroy(DynamicIntArray* arr)
{
    if (!arr)
        return 1;

    /* `malloc()` and `free()` should be used in pair. If we have used `malloc()` to allocate some section
       of memory, we must call `free()` later on to recycle them in order to prevent memory leak.*/
    free(arr->data); 
    /* After calling `free()`, remember to set pointer to null, otherwise it will be a dangling pointer*/
    arr->data = NULL;

    arr->size = 0;
    arr->pos = 0;
}

void print_array(DynamicIntArray* arr)
{
    if (!arr)
        return;

    if (arr->pos == 0)
    {
        printf("[ Empty array ]\n");
        return;
    }

    printf("[ ");
    for (int i = 0; i < arr->pos; i++)
    {
        printf("%d ", arr->data[i]);
    }
    printf("]\n");
}

int main()
{
    DynamicIntArray array;

    array_init(&array, 2);
    printf("Array after init:\n");
    print_array(&array);

    array_append(&array, 6);
    array_append(&array, 7);
    array_append(&array, -4);
    array_append(&array, -3);
    array_append(&array, 10086);
    array_append(&array, 114514);
    array_append(&array, 123456789);
    printf("Array after appending:\n");
    print_array(&array);

    array_destroy(&array);
    printf("Array after appending:\n");
    print_array(&array);
}