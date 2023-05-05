/*
 * Another way to achieve looping in C is to use the While and Do-While loops.
 *
 * These structures allow us to repeat a set of statements for as long as a
 * specified condition is true. Therefore, they differ from For because we do
 * not know a priori how many times we would like to repeat the cycles.
 *
 * What distinguishes the two structures is the control of the logical
 * expression: the While loop performs it at the beginning of the loop, the
 * Do-While at the end.
 *
 * While structure:
 *    counter initialization;
 *    while( expression ) {  // pre-test loop
 *        statements;
 *        update counter;
 *    }
 *
 * Do While statement:
 *    counter initialization;
 *    do {
 *        statements;
 *        update counter;
 *    } while ( expression)  // post-test loop
 *
 *  TIP: with do-while loop we have at least one cycle!
 *
 *  We can also reproduce a while loop with a For:
 *   for (; condition; ) ...
 */

#include <stdio.h>

int main()
{
    int input;
    char choice;

    do {
        printf("Enter 1 to continue: ");
        scanf("%d", &input);
        printf("\n");
    } while (input != 1);

    int n = 42;
    while (n != 0) {
        printf("%d\n", n);
        n--;
    }

    return 0;
}
