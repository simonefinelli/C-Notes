/*
 * We know that the keyword 'void' means absence of any type.
 *
 * So a pointer of type void* can contain the address of a data item of any type.
 * This can be very helpful: void* can be used as a parameter type or return
 * value type with functions that deal with data in a type_independent way!
 *
 * There are some special rules using these Pointers:
 *  - the void pointer does not know what type of object it is pointing to, so
 *      it cannot be de-referenced directly;
 *  - the void pointer must first be explicit cast to another type before it is
 *      de-referenced.
 */

#include <stdio.h>

int main()
{
    int n = 10;
    double d = 42.3;
    char c = 'X';

    void *ptr = NULL;

    ptr = &n;
    printf("Value of n is: %d\n", *(int *)ptr);

    ptr = &d;
    printf("Value of n is: %lf\n", *(double *)ptr);

    ptr = &c;
    printf("Value of n is: %c\n", *(char *)ptr);

    return 0;
}
