/*
 * In C language there are 2 ways to pass data to a function:
 *  - Pass by value;
 *  - Pass by reference.
 *
 *  Pass by Value
 *     By default arguments are passed by value to the function. This means
 *     that the values are copied and duplicated in the called function (a lot of overhead).
 *     Furthermore, changes made to these parameters inside the function have no
 *     effect outside.
 *
 *  Pass by Reference
 *     This means we only pass the address (reference) of the variables
 */

#include <stdio.h>

typedef struct Response {
    int result1;
    int result2;
} response;

void swap(int x, int y)  // x and y local to the function and passed by value
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

void swap1(int *x, int *y)  // x and y are pointers (now only the address are copied)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

response * multiple_values(int a, int b)
{
    static response r; // static variables have a property of preserving their value even after they are out of their scope.
                       // without static the local variable r is lost when the call finished.

    int operation1 = a + b;
    int operation2 = a * b;

    r.result1 = operation1;
    r.result2 = operation2;

    return &r;

}

int main()
{
    int a = 1, b = -1;
    swap(a, b);
    printf("After swapping (pass by value) a:%d and b:%d\n", a, b);

    swap1(&a, &b);
    printf("After swapping (pass by reference) a:%d and b:%d\n", a, b);

    // we can use pointers to return a set of values from a function
    response *multiple_res = multiple_values(10, 100);
    printf("The response containing: %d and %d",
           multiple_res->result1, multiple_res->result2);

    return 0;
}
