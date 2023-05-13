/*
 * A Parameter is a variable in a function declaration (prototype) and in a
 * function definition (implementation).
 *
 * An Argument is the data (value of the variables) passed to the function when
 * it is called.
 *
 * If a Function does not accept parameters, with can use the 'void' word.
 */

#include <stdio.h>

int multiplication(int a, int b);

int main()
{
    int a = 23;
    int b = 32;

    int result = multiplication(a, b);
    printf("The multiplication is: %d", result);

    return 0;
}

int multiplication(int a, int b)
{
    return a * b;
}
