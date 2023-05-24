/*
 * Name: main.c
 * Purpose: Perform operations with pointers.
 * Date: 2023/05/18
 * Author: Simox
 */

#include <stdio.h>

int main()
{
    double number = 42.0;
    double *p_number = NULL;

    p_number = &number;

    printf("The address' pointer is: %p\n", &p_number);
    printf("The pointer contain this address: %p\n", p_number);
    printf("The pointer contain this address: %p\n", &number);
    printf("The value of pointed variable is: %lf\n", *p_number);
    return 0;
}
