/*
 * The C programming language is hardware related. For this reason the same data
 * types can allocate memory using a number of different bytes.
 *
 * To discover the number of bytes used by a variable on own machine we can use
 * the sizeof operator. The argument to the sizeof operator can be a variable,
 * an array name, a data type name or an expression.
 *
 * TIP: sizeof is an operator and not a function, indeed it is evaluated at
 * compile time and not a runtime.
 */

#include <stdio.h>

int main()
{
    // data types
    printf("Char: %lu bytes\n", sizeof(char));
    printf("Integer: %lu bytes\n", sizeof(int));
    printf("Float: %lu bytes\n", sizeof(float));
    printf("Double: %lu bytes\n\n", sizeof(double));

    printf("Short integer: %lu bytes\n", sizeof(short));
    printf("Unsigned integer: %lu bytes\n", sizeof(unsigned));
    printf("Long integer: %lu bytes\n", sizeof(long));
    printf("Long double: %lu bytes\n", sizeof(long double));
    printf("Long long integer: %lu bytes\n\n", sizeof(long long));

    // expressions
    printf("Expression uses: %lu bytes\n", sizeof(42 + 1e18));
    printf("Expression uses: %lu bytes\n", sizeof((int)(1 / 1e4)));

    return 0;
}
