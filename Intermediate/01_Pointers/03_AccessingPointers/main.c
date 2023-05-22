/*
 * To retrieve the value of the variable that the Pointer is pointing, we can
 * use the De-referencing Operator (Indirection Operator): *.
 */

#include <stdio.h>

int main()
{
    int number = 42;
    int *p_number = &number;
    printf("The address of the pointer is: %p\n", &p_number);
    printf("The address of var pointed is: %p\n", p_number);
    printf("The address of var pointed is: %p\n", &number);



    printf("The value of number variable is: %d\n", *p_number);

    float increment = 0.15f;
    float result = (float)*p_number * increment;
    printf("The value of number variable now is: %f\n", result);

    *p_number = 1000;
    printf("The value of number variable now is: %d\n", number);

    // we can use to check the memory occupied to store an address (pointer) the
    // sizeof operator
    printf("The size of an address in memory is: %lu bytes",
           sizeof(p_number));

    return 0;
}
