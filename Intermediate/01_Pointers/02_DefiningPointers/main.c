/*
 * A Pointer is nothing more than a variable can only contains a memory address.
 *
 * But how can we create a Pointer to a variable? To do this we have to respect
 * a precise syntax. For example, we can declare a Pointer as follows:
 *  - int *p_number;
 *  Above we are declaring a pointer that can only point to integer variables (
 *  can only contain an address of an int variable).
 *
 *  TIP: we can declare a pointer putting one space after the * in order to differentiate
 *  the declaration with de-referencing (int * p_number).
 *
 *  To instantiate a Pointer we have to retrieve an address of a variable. To do
 *  this we can use the Address Operator &. This operator return the address
 *  of a variable.
 */
#include <stdio.h>

int main()
{
    // initialization
    int *p_number = NULL;  // always initialize a pointer with NULL (it is pointing to nothing!)
                            // NULL guarantees that the pointer does not point to any location.
    printf("The pointer p_number is pointing to %p\n", p_number);

    // address operator
    float number1 = 42.42f;
    float *p_number1 = &number1;
    printf("The pointer p_number1 is pointing to %p", p_number1);

}
