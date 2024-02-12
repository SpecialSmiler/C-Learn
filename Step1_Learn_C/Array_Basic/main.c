#include <stdio.h>

void print_array_int(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void learn_array_definition()
{
    int a[3] = { 1, 2, 3 };
    int b[] = { 4, 5, 6 };
    int c[3];
    print_array_int(a, 3);
    print_array_int(b, 3);
    print_array_int(c, 3); /* elements in 'c[3]' are not init */
}

void learn_size_of_array()
{
    int a[3] = { -1, 2, -3 };
    char b[3] = { 4, -5, 6 };
    printf("The size of \"int a[3]\" is %d bytes\n", sizeof(a));
    printf("The size of \"char b[3]\" is %d bytes\n", sizeof(b));
}

void learn_offset_about_array()
{
    int a[3] = { 123, 456, 789 };
    printf("a[0] is %d\n", a[0]);
    printf("a[1] is %d\n", a[1]);
    printf("*(a + 1) is %d\n", *(a + 1));
    printf("address of \"a\" is %u\n", a);
    printf("address of \"a[0]\" is %u\n", &a[0]);
    int* pt = a + 1;
    printf("address of \"a[1]\" is %u\n", &a[1]);
    printf("value about \"a + 1\" is %u\n", pt);
    /* Summary: The access of array is base on (pointer + offset). */
}

void learn_out_of_range()
{
    int a[3] = { 123, 456, 789 };
    printf("[OUT OF RANGE] a[3] is %d\n", a[3]);
}

void print_two_dimension_array_1(int *arr, int d1, int d2) /* d - dimension */
{
    for (int i = 0; i < d1; i++)
    {
        for (int j = 0; j < d2; j++)
        {
            int* ptr = arr + i * d2 + j;
            printf("%d ", *ptr);
        }
        printf("\n");
    }
}

/* "int (*arr)[4] means there is an array of four int point. */
void print_two_dimension_array_2(int (*arr)[4], int d1, int d2) /* d - dimension */
{
    /* Try another approach. */
    for (int i = 0; i < d1; i++)
    {
        for (int j = 0; j < d2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void learn_two_dimension_array()
{
    /* The so-called "two dimension array" is actually an array of arrays. */
    int aa[3][4] = {
        {11, 22, 33, 44},
        {55, 66, 77, 88},
        {99, 11, 45, 14}
    }; /* Two dimension, the first is 3, and the second is 4. */
    printf("\n");
    print_two_dimension_array_1(aa, 3, 4);
    printf("\n");
    print_two_dimension_array_2(aa, 3, 4);
}

int main()
{
    learn_array_definition();
    learn_size_of_array();
    learn_offset_about_array();
    learn_out_of_range();
    learn_two_dimension_array();
    return 0;
}