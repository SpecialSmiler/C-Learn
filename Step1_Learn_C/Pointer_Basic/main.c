#include <stdio.h>

void change_your_integer(int* pa, int b)
{
    if (!pa)    /* avoid accessing an invalid pointer */
        return;

    *pa = 666;
    b = 777;
}

void learn_variable_pointer()
{
    int a1 = 123;
    int b1 = 456;
    printf("a1=%d, b1=%d\n", a1, b1);
    change_your_integer(&a1, b1);
    printf("a1=%d, b1=%d\n", a1, b1);

}

void learn_size_of_pointer()
{
    int a = 1;
    int *pa = &a;
    printf("Size of pointer is %d bytes\n", sizeof(pa));
    printf("Size of pointer is %d bytes\n", sizeof(int *));
    float b = 3.14f;
    char c = 6;
    float* pb = &b;
    char* pc = &c;
    printf("Size of pointer is %d bytes\n", sizeof(pb));
    printf("Size of pointer is %d bytes\n", sizeof(pc));
}

void learn_essence_of_pointer()
{
    int a = 1;
    int* pa = &a;
    printf("Address of a1 is %d\n", &a);
    printf("Address of a1 is %d\n", pa);
}

void learn_dereference()
{
    float a = 3.14f;
    float* pa = &a;
    printf("Dereference result of pa is %f\n", *pa); /* Operator '*' is called `dereference operator`. */
    int* pb = (int*)&a; /* cast a float pointer to a int pointer */
    printf("Dereference result of pb is %f\n", *pb); /* pb is a int pointer, it cannot be dereference to a float number. */
    printf("Dereference result of pb is %d\n", *pb);
    /* Although pa and pb point to same memory, their dereference results are difference,
       because of type difference. */
    return;
}

int main()
{
    learn_variable_pointer();
    learn_size_of_pointer();
    learn_essence_of_pointer();
    learn_dereference();

    return 0;
}