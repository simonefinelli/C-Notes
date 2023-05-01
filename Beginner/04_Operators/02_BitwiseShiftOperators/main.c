/*
 * Bitwise operators are other types of operators that appear by default in the
 * C language. They are similar to logic operators, but they operate on single
 * bit values. The C language provides:
 *  - bitwise AND (&)
 *  - bitwise OR (|)
 *  - bitwise NOT (~)
 *  - bitwise XOR (^)
 *
 *  This kind of operations are very useful if we want to maximize the
 *  performances of our programs (memory and time). Indeed, we can use a single
 *  integer to store some info; for example, we can use a bit to identify if a
 *  person is male or female, another bit to specify if the person is adult or
 *  not, groups of 3 bits to specify, for example, the education level
 *  (8 max possibilities with 3 bits), etc. Applying that operators we can make
 *  fast operations and save memory.
 *
 *  Shifting operators, instead, move bits to the left or to the right:
 *   - Left shift operator (<<): add zeros to the right (power of 2 multiplication);
 *   - Right shift operator (>>): remove bits to the right (power of 2 division);
 *  E.g.:
 *      0001 0110 << 2: 0101 1000
 *      0001 0110 >> 2: 0000 0101
 *
 */

#include <stdio.h>

int main()
{
    unsigned int data1 = 42;  // 0000 0000 0000 0000 0000 0000 0010 1010
    unsigned int data2 = 150; // 0000 0000 0000 0000 0000 0000 1001 0110

    // bitwise operators
    unsigned b_and = data1 & data2;  // 0000 0000 0000 0000 0000 0000 0000 0010
    unsigned b_or = data1 | data2;  // 0000 0000 0000 0000 0000 0000 0000 0010
    unsigned b_not = ~data2;  // 1111 1111 1111 1111 1111 1111 0110 1001
    unsigned b_xor = data1 ^ data2;  // 0000 0000 0000 0000 0000 0000 1011 1100

    printf("Bitwise operator result: %u, %u, %u, %u", b_and, b_or, b_not,
           b_xor);

    // shifting operators
    unsigned left_shift = data1 << 2;  // 0000 0000 0000 0000 0000 0000 1010 1000
    unsigned right_shift = data2 >> 4;  // 0000 0000 0000 0000 0000 0000 0000 1001
    printf("\nShifting operator result: %u, %u", left_shift, right_shift);

    return 0;
}
