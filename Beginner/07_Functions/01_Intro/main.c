/*
 * A Function is a self-contained piece of program code designed to accomplish a
 * particular task. In other languages they are called subroutines/procedures.
 *
 * As other programming languages, the C has the own syntax and rules to implement
 * and use functions.
 *
 * Functions can be used for various purposes, like, printing (printf()), take
 * input user (scanf()), isolate code that can be used multiple time in the
 * code, etc. Furthermore, thanks to functions we can spit the program into
 * logic section (divide et impera), allows us to test, debug and maintain the
 * code more easily and efficiently.
 *
 * We can think of a Function like a black-box that take in input something and
 * output something else.
 *
 * The C programming language has a lot of built-in functions. These functions
 * come by default with the language and are useful in most of our programs.
 * Examples of built-in functions are: printf(), scanf(), etc.
 *
 * In general a Functions has 3 parts:
 *  - input arguments: they are passed to the function between () (TIP: the input args are not mandatory);
 *  - body: to perform some actions;
 *  - output: in most of the cases the function return something.
 *
 * The most important function in C is the main() function:
 *  - it indicates where the program start;
 *  - all C programs must have a main();
 *  - the parameters passed to the functions are called (command line args)
 *  - return program's status (for example the 'error code' 0 mean the program is terminated in right way)
 *
 */

#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    return 0;
}
