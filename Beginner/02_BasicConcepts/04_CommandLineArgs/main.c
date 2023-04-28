/*
 * Another way to pass data/information to a program is to use the Command Lines
 * arguments.
 * Command-line args supply the information to the program at execution-time.
 * These commands are passed to the main() function. In particular, the main
 * accepts two arguments:
 *  - argc (argument count): number of arguments passed;
 *  - argv (argument vector): array of character pointers (strings).
 *
 *  NOTE: In the argv the first entry is a pointer to the name of the
 *  program that is executing.
 *
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int number_of_args = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Number of arguments: %d\n", number_of_args);
    printf("Argument 1 is the program name: %s\n", arg1);
    printf("Argument 2 is the first command line arg: %s\n", arg2);

    return 0;
}
