/*
 * The C language allow us to perform defined type of operations on pointers:
 *  - Assigning: assign an address to a pointer;
 *  - De-referencing: access to the value of variable pointed;
 *  - Do arithmetics:
 *     - increment: for example increment the pointer's value by one to moving
 *                  to the next element in an array;
 *     - decrement: decrement a pointer by one value;
 *     - sum: adding an integer to a pointer or another pointer;
 *     - difference: subtract an integer to a pointer or another pointer.
 *   - Relational: compare the values of two pointers;
 */

#include <stdio.h>

int main()
{
    // declare an array
    int array[] = {100, 200, 300, 400, 500};  // TIP: array names are addresses!

    // link it with a pointer
    int *p_array = array;

    // access to some location using the pointer
    int *location = p_array + 3;
    printf("The value of the location is: %d", *location);
    return 0;
}
