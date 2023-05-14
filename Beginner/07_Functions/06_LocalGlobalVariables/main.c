/*
 * In the C language programming we can encounter two types of variables:
 *  - Local variables;
 *  - Global variables.
 *
 * Local Variables
 *    are defined inside a function, and the value of that variable
 *    can only be accessed by elements of the function in which it is defined.
 *    So, its value cannot ve accessed by any other function.
 *    Local variables live within the function, they are created each time the
 *    function is called, and deleted when the function do the return.
 *    TIP: local variables are also applicable to any code where the variable
 *    is created in a block {} (like loops, if, etc.).
 *
 * Global Variables
 *    are declared outside any functions and can be accessed by any function in
 *    the program. So, a global variable has the same lifetime of the entire
 *    program.
 *
 * TIP: if a local variable has the same name of a global variable, then, within
 * the function the local variable will mask the global variable.
 *
 * Warning: in general the use of global variables is a 'bad' thing, because
 * they promote coupling (dependence) between functions. Furthermore, in bigger
 * projects the bug will be hard to find and hard to fix once it is found.
 * In general global variables can be used for constant values, but in that case
 * we should use the pre-processor directive (like #define).
 */

#include <stdio.h>

// global variables
int global_counter = 0;


// prototypes
void foo()
{
    int local_counter = 0;

    local_counter++;
    global_counter++;

    printf("Local counter: %d\n", local_counter);
    // printf("Local in main(): %d", main_local);  // ERROR!!!
}


int main()
{
    int main_local = 100;

    global_counter++;

    foo();

    // printf("Foo() local counter: %d", local_counter);  // ERROR!!!
    printf("Global counter: %d\n", global_counter);
    printf("Local in main(): %d\n", main_local);

    return 0;
}
