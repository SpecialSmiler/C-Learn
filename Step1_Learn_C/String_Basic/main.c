#include <stdio.h>
#include <string.h>

typedef char Str128[128];

void learn_string_definition()
{
    char str[] = "Hello world!";
    printf("%s\n", str);
}

void learn_size_of_string()
{
    char a[] = "Hello";
    printf("size of a is %d\n", sizeof(a));
    /* It shows that the size of 'a' is 6, but we see it only
       has five letter. Do you know why? 
       
       That is so-called 'null-terminated'. An Null-terminated string has '\0'
       at the end to represent it is finished in that position of char. 

       PS: In C, we use 0 (zero) to represent 'NULL'.
    */
}

void learn_string_and_char()
{
    /* String is actually an array of char.*/
    char a[] = "Hello";
    char b[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    printf("String a is %s\n", a);
    printf("String b is %s\n", b);
}

void print_string_array(Str128 lines[], int lineCount)
{
    for (int i = 0; i < lineCount; i++)
    {
        printf("%s\n", lines[i]);
    }
}

void learn_string_array()
{
    char lines1[][128] =
    {
        "A: How are you?",
        "B: I'm fine, thank you, and you?",
        "A: I'm fine too, thanks...",
    };

    Str128 lines2[] =
    {
        "A: 你好。",
        "B: 我好，谢谢，你呢？",
        "A: 我也好，谢谢。",
    };
    print_string_array(lines1, 3);
    print_string_array(lines2, 3);
}

void learn_string_relevant_api()
{
    char a1[9] = "abc10086";
    char a2[9];
    strcpy_s(a2, sizeof(a2), a1); /* copy string */
    printf("a2 is %s\n", a2);

    char a3[9] = "abc10087";
    if (strcmp(a1, a3))
    {

    }
    else
    {

    }
}


int main()
{
    //learn_string_definition();
    //learn_size_of_string();
    //learn_string_and_char();
    //learn_string_array();
    learn_string_relevant_api();
    return 0;
}