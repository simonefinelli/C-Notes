/*
 * The C library contains several input functions, scanf() is the most used.
 * It can read input according to a specific format.
 * scanf() reads the input from the standard input stream (stdin) and scans that
 * input with the specified format.
 * To work, the scanf() uses Pointers, but for now we take it as it is.
 * There are three information that allows us to use scanf() correctly:
 * - it returns the number of items that it successfully read;
 * - if we read a value mapped into a basic C type (int, float, double, char,
 *      etc.) the name of the variable must be preceded by the '&' char.
 * - if we read a string into a char array, we do not use the '&' char.
 * Also, scanf() uses spaces, new-lines, tabs to divide the input.
 *
 * The printf(), instead, is the standard function to show the value of
 * variables, constants, expressions, etc.
 * The printf() (opposite of scanf()) converts ints, floats, chars, strings to
 * text in order to show it on screen. To print the right value, the printf()
 * uses format specifiers (%letter). Each data type in C have a specif format
 * specifier, for example, for integers we use %d, for doubles %lf, for strings
 * %s, etc.
 */
#include <stdio.h>

int main()
{
    char name[100];
    int age;

    printf("Insert your name and the age: ");
    scanf("%s %d", name, &age);

    printf("Nice to meet you %s (%d)!", name, age);

    return 0;
}
