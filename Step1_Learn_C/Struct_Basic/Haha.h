#pragma once
struct Haha1
{
    char a;
    short b;
    int c;
    /* char will be 1-byte aligned
       short will be 2-byte aligned
       int will be 4-byte aligned

       The largest is 'int'. So Haha1 is aligned in 4 bytes.

       |Byte1|Byte2|Byte3|Byte4|
       |--a--|?????|-----b-----|
       |-----------c-----------|

       So Haha1 is 8 bytes in total.
    */
};

struct _Haha2
{
    char a;
    int b;
    short d;

    /* The largest is 'int'. So Haha2 is also aligned in 4 bytes.

       |Byte1|Byte2|Byte3|Byte4|
       |--a--|?????????????????|
       |-----------b-----------|
       |-----b-----|???????????|

       Haha2 is 12 bytes in total.
    */
};

/* Use 'typedef' to create an alias for 'struct _Haha2'. */
typedef struct _Haha2 Haha2;

typedef struct _Haha3
{
    char a;
    short b;
    int c;
    char d;

    /* The largest is 'int'. So Haha3 is also aligned in 4 bytes.

       |Byte1|Byte2|Byte3|Byte4|
       |--a--|?????|-----b-----|
       |-----------c-----------|
       |--d--|?????????????????|

       So Haha3 is also 12 bytes in total.
    */

} Haha3;

typedef struct _Haha4
{
    char a;
    short b;
    long long c;
    int d;

    /* The largest is 'long long'! So Haha4 is also aligned in 8 bytes!

       |Byte1|Byte2|Byte3|Byte4|Byte5|Byte6|Byte7|Byte8|
       |--a--|?????|-----b-----|???????????????????????|
       |-----------------------c-----------------------|
       |-----------d-----------|???????????????????????|

       So Haha4 is also 24 bytes in total.
    */
} Haha4;