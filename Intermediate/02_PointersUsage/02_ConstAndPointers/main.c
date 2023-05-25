/*
 * When we use the const modifier on a variable or an array, we are telling the
 * compiler that their contents will not be changed.
 *
 * But when we use it with Pointers, we have to consider two things:
 *  - whether the Pointer will be changed or not;
 *  - whether the value that the pointer points to will be changed or not.
 */

#include <stdio.h>

int main()
{
    /*
     * second case
     */
    int value = 10;
    const int * p_value = &value;  // the valued pointed cannot be changed
    // *p_value = 42;  // compiler error
    printf("The value pointed is: %d\n", *p_value);

    // Note that we can change the value use the address (obviously)
    int value2 = 100;
    p_value = &value2;
    printf("Now the value pointed is: %d\n\n\n", *p_value);


    /*
     * first case
     */

    int counter = 0;
    int counter2 = -10;
    int * const p_counter = &counter;
    // p_counter = NULL;  // compiler error
    // p_counter = &counter2;  // compiler error
    printf("The address is: %p\n", p_counter);
    printf("The counter is: %d\n", *p_counter);

    // Note we can change the value of the variable pointed
    *p_counter = 700;
    printf("Now the counter is: %d\n", counter);
    printf("The address is still: %p\n", p_counter);

    /*
     * Combine first case and second case
     */
    int number = 32;
    const int * const p_number = &number;

    // p_number = NULL;  // not allowed
    // *p_number = 42; // not allowed too

    // but we can still change the value of the original var (if we do not want that, declare number var as const too)
    number = 65;
    printf("The value of referenced var by p_number is: %d", *p_number);

    return 0;
}
