#include "Haha.h"
#include "Student.h"
#include <stdio.h>
#include <string.h>

void learn_size_of_struct()
{
    /* There is a concept that called "Data structure alignment" which
           is a way to arrange and access data in computer memory. We
           will see the data structure is always aligned according to bytes
           of the largest member inside it.
       A well arranged struct should be tiny and uses less memory.
    */
    printf("Size of Haha1 is %d bytes\n", sizeof(struct Haha1));
    printf("Size of Haha2 is %d bytes\n", sizeof(Haha2));
    printf("Size of Haha3 is %d bytes\n", sizeof(Haha3));
    printf("Size of Haha4 is %d bytes\n", sizeof(Haha4));

    struct Haha1 haha1 = { -1, -1, -1 };
    Haha2 haha2 = { -1, -1, -1 };
    Haha3 haha3 = { -1, -1, -1, -1 };
    Haha4 haha4 = { -1, -1, -1, -1 };

    int a = 1;

    printf("Size of Student is %d bytes\n", sizeof(Student));
    Student student;
    student.id = 0;
    strcpy_s(student.name, sizeof(student.name), "Makka Pakka");
    student.age = 1;
    student.birthday.year = 2;
    student.birthday.month = 3;
    student.birthday.day = 4;
    student.score = 3.14f;

    int b = 1;
}

void learn_array_of_struct()
{
    Student students[2] =
    {
        { .id = 12345, .name = "Tom", .age = 3, .birthday = { 1940, 1, 1 }, .score = 14.231 },
        { 98765, "Jerry", 3, { 1940, 1, 1 }, -32.123 }
    };

    for (int i = 0; i < 2; i++)
    {
        print_student(&students[i]);
    }
}

void print_student(const Student* student)
{
    printf("==== %s ====\n", student->name);
    printf("ID: %d\n", student->id);
    printf("Age: %d\n", student->age);
    printf("Birthday: %d-%d-%d\n", student->birthday.year, student->birthday.month, student->birthday.day);
    printf("Score: %.2f\n", student->score);
    printf("\n");
}

int main()
{
    learn_size_of_struct();
    learn_array_of_struct();
    return 0;
}