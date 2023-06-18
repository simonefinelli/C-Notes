/*
 * There are three functions that are used to allocate memory:
 *  - malloc
 *  - calloc
 *  - realloc
 *
 * Malloc
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 *   The simplest standard library function that allocates memory at runtime.
 *   - we have to include stdlib.h;
 *   - need to specify the number of bytes of memory;
 *   - returns the address of the first byte of memory allocated;
 *   - because the return address, we have to use a Pointer to store it.
 *
 *   #############
 *   Ex.
 *    int *p = (int *)malloc(100);
 *    - we have requested 100 bytes of memory from the Heap;
 *    - p points to the first int location at the beginning of the q00 bytes that were allocated;
 *    - p can hold 25 int values if an int requires 4 bytes each (remember this depends on the machine);
 *    - the cast (int *) converts the address returned (void *) to an explicit address that points an int.
 *
 *    A better approach is to use sizeof() operator:
 *    int *p = (int *)malloc(25*sizeof(int));  // now we can always manage 25 integers regardless of the machine architecture
 *   #############
 *
 *   # Note that, we can request any size of bytes with malloc, but remember that
 *   # the Heap is not infinite! In fact, if the memory that we requested cannot
 *   # be allocated, the malloc will return a NULL pointer; so it is a good idea
 *   # to check any request.
 *   #
 *   # - if (!p) { deal with failed memory allocation} else { do something };
 *
 *   When a memory allocation is done, when it is no longer required, we have to
 *   always release the memory used. In general the memory allocated on the Heap
 *   will be automatically released when the program ends, but is a better approach
 *   explicit the release even the program is simple!.
 *
 *   In fact, when we allocate some memory dynamically continuously (like in a loop),
 *   and we do not free the memory, then a MEMORY LEAK could show up ("slowly" we
 *   can consume the entire memory!).
 *
 *   Remember that if we want free the memory, we must have the access to the address
 *   that references that block of memory, if we lose that pointer we could find
 *   in a memory leak situation.
 *
 *   The function used to release the memory is free:
 *   - free(p);  // memory released
 *   - p = NULL;  // reset the pointer
 *
 *
 * Calloc
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * It is very similar to malloc, but with some advantages:
 * - it allocates memory as a number of elements of a give size (like malloc);
 * - it initialize the memory that is allocated so that all bytes are zero;
 *
 *   #############
 *   Ex.
 *    int *p = (int *)calloc(25, sizeof(int));
 *    - the above example has the same effect of the malloc, but now the memory
 *    is also initialized.
 *   #############
 *
 *
 * Realloc
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * This function allow us to reuse or extend memory that we previously allocated
 * using malloc or calloc.
 *
 * The function expects two args:
 *  - a pointer containing an address previously returned by a call to malloc o calloc;
 *  - the size in bytes of the nwe memory that we want to allocate.
 *
 * Te function return a void pointer or a NULL value (same as previous cases).
 *
 * ATTENTION: the realloc function preserves the content of the original memory area,;
 *            in fact we are just extending that memory! Also, the new memory
 *            addresses could be fragmented (nor have a continuous number).
 *
 *
 * Consideration
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 * > Avoid allocating lots of small amounts of memory:
 *   - allocating memory on the Heap carries some overhead;
 *   - allocating many small block of memory will carry much more overhead than
 *       allocating fewer larger blocks.
 *
 * > Only hang on to the memory as long as you need it. As soon as possible
 *   release the memory.
 *
 * > DO NOT FORGET TO RELEASE MEMORY!
 *
 * > Releasing principle: the actor who crates the memory, should be the same that
 *     release it. For example, if a function allocates memory, it must be the one
 *     which have to release it.
 *
 * > Put attention on do not inadvertently overwrite the address of memory allocated,
 *     will cause a memory leak.
 */

#include <stdio.h>
#include <stdlib.h>  // malloc, calloc, realloc
#include <string.h>

int main()
{
    char *str;
    char *str1;

    // MALLOC
    str = (char *)malloc(8 * sizeof(char));  // remember of '\0'
    strcpy(str, "Gandalf");
    printf("String = %s, Address = %p\n", str, str);

    // REALLOC
    str1 = (char *)realloc(str, 18 * sizeof(char));
    strcat(str1, " the gray!");
    printf("\nString = %s, Address = %p\n", str1, str1);

    free(str1);  // str and str are related so only one free is enough (str or str1 is the same)!

    return 0;
}
