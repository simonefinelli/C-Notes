/*
 * The power of pointers in C is shown with arrays, and when we want to go
 * through their elements.
 */

#include <stdio.h>

int sum_vector(int *v, const int n)  // note that we can use int *v instead of int v[] due to correlation between pointers and arrays.
{
    int sum = 0;
    int * const last = v + n ;

    for (; v < last; v++) {
        sum += *v;
    }

    return sum;
}

int main() {

    int vector[5] = {10, 20, 30, 40, 50};
    int *p_vector = vector;  // the pointer is pointing at first element

    // accessing at elements
    printf("The third element of the array is: %d\n", *(p_vector + 2));
    *(p_vector + 4) = 1000;
    printf("The 10th element of the array now is: %d\n", vector[4]);

    // pointing at i-element
    p_vector = &vector[1];
    printf("The pointer is pointing to: %d\n", *p_vector);

    // ++ and -- operators
    p_vector++;
    printf("The pointer is pointing to: %d\n", *p_vector);
    p_vector--;
    printf("The pointer is pointing to: %d\n", *p_vector);


    // call the sum function
    int vector2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int total = sum_vector(vector2, 10);
    printf("The total is: %d\n", total);

    printf("The pointer is pointing to: %d\n", *p_vector);


    return 0;
}
