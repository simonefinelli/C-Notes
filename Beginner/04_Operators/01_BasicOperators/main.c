/*
 * In C operators are functions that use a symbolic name to perform
 * mathematical and/or logical operations. Most of the operators are defined by
 * the C standard directly, and are used with the infix notation:
 * - arithmetic operators are +, -, /, *, %, ++, --
 * - logical operators: && (and), || (or), ! (not)
 * - relational operators: ==, !=, >, <, >=, <=
 * - assignment operators: =, +=, -=, *=, /=, ...
 *
 * TIP: the operators have a specific precedence. Full list here:
 * https://en.cppreference.com/w/c/language/operator_precedence.
 */

#include <stdio.h>
#include <stdbool.h>  // C99

int main()
{
    int num1 = 10;
    int num2 = 42;

    // arithmetic operators
    printf("*** ARITHMETIC OPERATORS ***\n");
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %lf\n", (double)num1 / num2);
    printf("Modulus: %d\n", num2 % num1);
    int increment_before = num2 * (num1++);  // first use num1 value, after increasing it by 1
    int increment_after = num2 * (++num1); // first increasing the value of num1 by 1, after use it
    printf("Increment (before): %d, (num1 = 10)\n", increment_before);
    printf("Increment (after): %d, (num1 = 12)\n", increment_after);

    // logical operators
    printf("\n*** LOGICAL OPERATORS ***\n");
    bool A = true;   // C99
    bool B = false;  // C99
    printf("AND operator: %d\n", A && B);
    printf("OR operator: %d\n", A || B);
    printf("NOT operator %d\n", !A);

    // relational operators
    printf("\n*** RELATIONAL OPERATORS ***\n");
    float x = 100.6f;
    float y = -100.98f;
    printf("Bigger than operator: %d\n", x > y);
    printf("Smaller than operator: %d\n", x < y);
    printf("Equality operator %d\n", x == y);
    printf("Difference operator %d\n", x != y);

    // assignment operators
    printf("\n*** ASSIGNMENT OPERATORS ***\n");
    int number = 42;
    number += 10;  // increase the number by 10 - same as number = number + 10
    number -= 100;  // decrease number (52) by 100
    printf("Number after some different assignments: %d", number);

    return 0;
}
