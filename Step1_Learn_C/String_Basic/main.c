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
    printf("Size of a[] is %d\n", sizeof(a));
    /* It shows that the size of 'a' is 6, but we see it only
       has five letter. Do you know why? 
       
       That is so-called 'null-terminated'. An Null-terminated string has '\0'
       at the end to represent it is finished in that position of char. 

       PS: In C, we use 0 (zero) to represent 'NULL'.
    */
    char b[64] = "Kitty";
    printf("Size of b[] is %d\n", sizeof(b));
    /* Even b[] only has 5 letters, it's actual size is 64 because of our explicit definition. */
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

void learn_string_copy()
{
    char a1[9] = "abc10086";
    char a2[9] = "haha";
    strcpy_s(a2, sizeof(a2), a1); /* copy string */
    printf("After copying, a2 is %s\n", a2);
}

void learn_string_compare()
{
    char s1[9] = "abc10086";
    char s2[9] = "abc10087";
    /* We cannot write 's1 == s2' to compare an char array. It's not effective in C. 
       We use strcmp() to compare two string.
       (1) if s1 == s2, it return 0;
       (2) if s1 < s2, it return -1;
       (3) if s1 > s2, it return 1. 
     */
    if (strcmp(s1, s2) == 0)
    {
        printf("s1 is same as s2.\n");
    }
    else
    {
        printf("s1 is NOT same as s2.\n");
    }
}

void learn_string_concatenate()
{
    char s1[128] = "Hello";
    char s2[128] = "Kitty";
    strcat_s(s1, sizeof(s1), s2);
    printf("After concatenating, s1 is %s\n", s1);
}

void learn_string_length()
{
    char s1[128] = "Hello";
    printf("Size of s1 is %u\n", sizeof(s1));
    printf("Length of s1 is %u\n", strlen(s1));
}

int main()
{
    learn_string_definition();
    learn_size_of_string();
    learn_string_and_char();
    learn_string_array();

    /* Some API to handle string. See <string.h> for more details. */
    learn_string_copy();
    learn_string_compare();
    learn_string_concatenate();
    learn_string_length();
    return 0;
}