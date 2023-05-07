/*
 * It is very common to in a program to store equal data in an organized way.
 * One way is to use the Arrays.
 *
 * In C arrays allow you to group values together in a single variable.
 * Arrays in C have some typical characteristics:
 * - an Array can contain only items of the same data type;
 * - an Array have a defined and fix length (strict but efficient).
 *
 * We can declare an Array as follows:
 *  type arr_name[max_size];
 *   - type: int, unsigned, long, double, etc;
 *   - []: tells the compiler that the var is an array;
 *   - max_size: the length (size or dimension) of the array.
 *
 * Warning: Arrays' indexes in C start from 0!
 *
 * To access an array's elements we can use the element index (int) and []:
 *  - arr[0]: we are retrieving the item in the first position of the array.
 *
 * TIP: elements of an arrays are store sequentially in memory, so the addresses
 * are progressive.
 *
 * Warning: if we try to access an index that do not exist, the program will
 * crash or return garbage data (we have an 'out of bound error').
 *
 * We can assign values to array's items using the assign operator (=) and the
 * []:
 *  - arr[1] = 42;
 *
 * For the initialization view main1.c.
 */

#include <stdio.h>

int main()
{
    int scores[10];
    unsigned array_size = sizeof(scores)/sizeof(scores[0]);  // find array length
    int total = 0;

    // get user input
    printf("Please enter 10 numbers:\n");
    for (unsigned i = 0; i < array_size; i++ ) {
        printf("%2u > ", i + 1);
        scanf("%d", &scores[i]);

        total += scores[i];
    }

    // calculate mean
    printf("\nThe mean is: %.2lf", (double)total/array_size);

    return 0;
}
