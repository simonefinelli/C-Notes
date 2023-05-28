/*
 * One of the most common uses of pointers in C is as pointers to arrays (especially
 * with char arrays).
 *
 * The main reasons for using pointers to arrays are ones of notational convenience
 * and of program efficiency.
 *
 * Pointers to arrays generally result in code that uses less memory and executes
 * faster.
 */

#include <stdio.h>

int main()
{
    int values[100];
    int *ptr = NULL;

    ptr = values;  //  the pointer contains the address of the first array element (the array is treated as a pointer to the first element!)
    printf("The address is: %p\n", ptr);

    // equivalent of above
    ptr = &values[0];
    printf("The address is: %p\n", ptr);

    return 0;
}
