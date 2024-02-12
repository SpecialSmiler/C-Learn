#include <stdio.h>

void learn_sizeof()
{
    // integral number
    char cc = 123;
    short ss = 114514;
    int ii = 123456;
    long ll = 567890;
    long long llll = 112233445566778899;

    // floating point number 
    float f1 = 3.14f;
    double f2 = 3.14;

    /* The 'sizeof()' is an operator. It is used for getting the size of memory that the variable occupies. */
    printf("Size of char: %d\n", sizeof(cc));
    printf("Size of short: %d\n", sizeof(ss));
    printf("Size of int: %d\n", sizeof(ii));
    printf("Size of long: %d\n", sizeof(ll));
    printf("Size of long long : %d\n", sizeof(llll));
    printf("Size of float: %d\n", sizeof(f1));
    printf("Size of double: %d\n", sizeof(f2));

    /* The following codes are equivalent to the codes above. */
    printf("=====Another Style=====\n");
    printf("Size of char: %d\n", sizeof(char));
    printf("Size of short: %d\n", sizeof(short));
    printf("Size of int: %d\n", sizeof(int));
    printf("Size of long: %d\n", sizeof(long));
    printf("Size of long long : %d\n", sizeof(long long));
    printf("Size of float: %d\n", sizeof(float));
    printf("Size of double: %d\n", sizeof(double));
}

void learn_signed_and_unsigned()
{
    char c1 = -1;
    signed char c2 = -2; // 'signed char' is actually same as 'char'.
    unsigned char c3 = -1; // c3 actually show 255. Do you know why?
    printf("c1=%d\n", c1);
    printf("c2=%d\n", c2);
    printf("c3=%d\n", c3);

    unsigned int i1 = -1; // what about assigning -1 to an 'unsigned int'?
    printf("i1=%d\n", i1); // run the code and see what will be printed
    printf("i1=%u\n", i1); // ditto
    int i2 = i1;
    printf("i2=%d\n", i2);
    printf("i2=%u\n", i2);
    /* If you specify '%d' to printf(), it will print the number as 'int'. 
       And if you specify '%u' to printf(), it will print the number as 'unsigned int'.
       So, printf() doesn't care about the original type of the number. */
}

void learn_literal()
{
    int a1 = 12;    
    int a2 = 0b1100; // write '0b' in the head to represent binary
    int a3 = 014; // write '0' in the head to represent octonary (But I think octonary is rarely used.)
    int a4 = 0xC; // write '0x' in the head to represent hexadecimal

    /* Actually, they have same value, all of them are '12' in decimal */
    printf("a1=%d\n", a1);
    printf("a2=%d\n", a2);
    printf("a3=%d\n", a3);
    printf("a4=%d\n", a4);

    printf("In decimal, a1 shows %d\n", a1);
    //printf("In binary, a1 shows \n", a1); /* Well, printf() doesn't support directly outputting in binary format. Haha... */
    printf("In octonary, a1 shows %o\n", a1);
    printf("In hexadecimal, a1 shows %x\n", a1);
}

void learn_value_overflow()
{
    char maxChar = 127;
    char minChar = -128;
    char tooBig = 128;
    char tooSmall = -129;

    char tooBig2 = 127 + 1; // 0111 1111 + 0000 0001 = 1000 0000
    char tooSmall2 = -128 - 1;  // 1000 0000 - 1111 1111 = 01111 1111

    printf("maximum char is %d\n", maxChar);
    printf("minimum char is %d\n", minChar);
    printf("char that bigger than maximum is %d\n", tooBig);
    printf("char that smaller than minimum is %d\n", tooSmall);
}

int main()
{
    /* You can comment or uncomment the following codes to get different output.*/
    learn_sizeof();
    learn_signed_and_unsigned();
    learn_literal();
    learn_value_overflow();

    return 0;
}