/*
 * The C programming language provides a specif statement to take a decision.
 * The name of this statement is IF statement.
 *
 * We can have various forms of the if statement:
 *  - Simple form
 *      if (expression)
 *          true branch
 *
 *  - Complete form
 *      if (expression) {
 *          true branch
 *      } else {
 *          false branch
 *      }
 *
 *  - Else-if form
 *      if (expression) {
 *          true branch
 *      } else if (expression) {
 *          true branch
 *      } else {
 *          false branch
 *      }
 *
 *  - Nested form
 *      if (expression) {
 *          if (expression) {
 *              true branch
 *          } else {
 *              false branch
 *          }
 *      } else {
 *          false branch
 *      }
 *
 *  We can take decision using also the Conditional Operator (ternary statement)
 *   - condition ? expression1 (true branch): expression2 (false branch)
 *
 */
#include <stdio.h>

int main()
{
    int number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("\nThe number is even!");
    else
        printf("The number is odd!");

    if (number < 0) {
        printf("\nThe number is negative!");
    } else if (number > 100) {
        printf("\nThe number is greater than 100!");
    } else
        printf("\nThe number is between 0 and 100!");

    // using the ternary operator
    (number % 2 == 0) ? printf("\nEven!") : printf("\nOdd!");

    return 0;
}
