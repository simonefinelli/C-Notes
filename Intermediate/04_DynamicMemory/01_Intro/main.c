/*
 * Another concept related to Pointers is the Dynamic Memory Allocation.
 *
 * Whenever we define a variable in C, the compiler automatically allocates
 * the correct amount of storage based on the data type. But it is frequently
 * desirable to be able to dynamically allocate storage while a program is
 * running.
 *
 * For example, if we have a program that is designed to read a set of data from
 * a file into array we have three choices:
 * - define a static array with size equal to maximum number of possible elements;
 * - use a variable-length array to dimension the size of the array at runtime;
 * - allocate the array dynamically.
 *
 * Static Approach
 * int data_array[1000]; - the array cannot contain more than 1000 elements; if
 * the size is not enough we have to increase the size and recompile the program.
 *
 * Dynamic Approach
 * Using dynamic memory, we can create memory storage as we need it: the memory
 * is allocated at run-time!
 *
 * Two vantages with dynamic memory:
 *  - we can use only the necessary amount of memory (instead of pre-allocate a huge amount);
 *  - we can create new memory only if we need it;
 * All of that is possible only thanks to the Pointers.
 *
 * There are 2 ways to create memory in a program:
 *  - use memory from the Stack;
 *  - use memory from the Heap;
 *
 * Dynamic memory allocation reserves everything on the Heap. The Heap is a big
 * space from where we can subtract memory for our variables (memory allocation),
 * but, remember, we have the burden of freeing the memory once it no longer need
 * (memory releasing) ** Heap memory is big, but not infinite! **.
 *
 * The Stack, instead, is used by function args and local variables. It is more
 * limiting than Heap. Moreover, the space allocated on the Stack is freed when
 * the function ends.
 */

#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    return 0;
}
