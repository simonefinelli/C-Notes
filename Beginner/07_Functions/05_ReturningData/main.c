/*
 * Functions can return data after performs some actions.
 *
 * The type of data returned by a Function is specified at the beginning of
 * the header; if the Function does not return anything, then the 'void' statement
 * is used.
 *
 * return_type function_name (type1 param1, type2 param2, ...)
 * {
 *     // statements
 *
 *     return return_type;
 * }
*
*  Note that the returned type must match with the return_type in the header's
*  Function.
 *
 */

#include <stdio.h>

int integer_sum(int a, int b)
{
    return a + b;
}

double division(float a, float b)
{
    return a/b;  // conversion from float to double (promotion - no need cast)
}

int main()
{
    printf("Integer sum: %d\n", integer_sum(1, 2));

    printf("Double division: %.3lf\n", division(1.32f, 2.01f));

    return 0;
}
