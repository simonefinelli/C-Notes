/*
 * Pointers are very similar to the concept of indirection.
 * For example, if we need to buy a new pc in our company:
 *  - we have to contact the purchasing department;
 *  - ask they to order a new pc;
 *  - the department call the affiliated store and order the pc;
 *  - when the pc arrive then they will send it to us;
 * So, we did not buy the new pc, in fact, we do not know which particular
 * store is used to order the item (indirection)!
 *
 * In programming languages, indirection is the ability to reference something
 * using a name (address), instead of the value itself.
 *
 * In C a Pointer provides an indirect accessing to variables. In particular, a
 * Pointer is a variable that contains a memory address of another location
 * memory that contain a value. And, remember that a pointer can only store
 * addresses!
 *
 * The compiler have to know the type of data stored in the variable to which it
 * points, because it must know how much memory is occupied or how to handle
 * the content of the variable pointed.
 * So a pointer is strongly associated at variable data type.
 *
 * But, wht use Pointers?
 * Accessing data only by value (variable) is very limiting. Whit pointers we can
 * access any location and perform, for example, arithmetic with pointers. Also,
 * passing lange objects (like big array, bis structures, etc.) as pointers can
 * improve overall performance (indeed, in C array are passed only by reference).
 *
 * Still, Pointers allow you to refer to the same place from multiple locations,
 * so we can do updates only in one location (changes viewed directly from which
 * are pointing that location); this can be useful also to save memory space.
 *
 * Pointers are useful to get multiple values from a function, in fact, a function
 * can return only one value, but by passing arguments as pointers we can
 * get more values.
 *
 * With Pointers we can use dynamic memory and have a better memory management (
 * we can save memory avoiding static (compile time) declarations).
 *
 * In the end, Pointers allow us to design complex data structures like stack, queue,
 * liked list, etc.
 *
 */

#include <stdio.h>

int main()
{
    int number = 42;
    int *pnumber = &number;  // pointer pointing to number variable's address

    printf("The number is: %d", *pnumber);  // de-referencing (access to the value of pointed variable)

    return 0;
}
