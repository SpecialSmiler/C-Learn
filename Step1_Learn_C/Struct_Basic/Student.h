#pragma once

typedef struct _Data
{
    int year;
    int month;
    int day;
} Data;

typedef struct _Student
{
    int id;
    char name[16];
    int age;
    Data birthday;
    float score;
} Student;

void print_student(const Student* student);
