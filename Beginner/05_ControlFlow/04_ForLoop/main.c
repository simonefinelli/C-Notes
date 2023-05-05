/*
 * The C programming language has few constructs designed to handle the
 * repeating code. In particular, we can repeat a block of statements until
 * a condition (or multiple conditions) a condition is no longer valid, or for a
 * number of defined times. Nevertheless, we can also have infinite loops.
 *
 * One of looping constructors in C is the For loop. That loop is used
 * (mainly) when we have a finite number of iterations.
 *
 * The general patter for the For loop is:
 *    for(starting condition; continuation condition; action per iteration) {
 *      loop statements;
 *    }
 * Typically the starting condition sets an initial value to a counter.
 * The continuation condition is a logical expression (true or false) determines
 * whether the loop should continue or not. The test is done at the beginning
 * of the loop rather than at the end!
 * The action per iteration is executed at the end of each cycle; normally here
 * we increment or decrement the counter variable. Nonetheless, in here we can
 * modify more variables (use commas to separate them).
 *
 */

#include <stdio.h>

int main()
{
    unsigned count;
    unsigned long long sum = 0;

    printf("Enter the first N number that you want to add: ");
    scanf("%d", &count);


    for (unsigned i = 1; i <= count; i++) {  // form C99 inline declaration (unsigned int)
        sum += i;
    }
    printf("Sum: %llu\n", sum);

    // sorter version
    sum = 0;
    for (unsigned int i = 1; i <= count; sum += i++);
    printf("Sum (short version): %llu", sum);

    // infinite loop
    // for (;;) {}

    return 0;
}
