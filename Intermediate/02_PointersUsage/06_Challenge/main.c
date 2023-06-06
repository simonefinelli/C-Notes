/*
 * Name: main.c
 * Title: Pointers and functions.
 * Purpose: Works with functions and pointers.
 * Date: 2023/05/20
 * Author: Simox
 */

#include <stdio.h>

// prototypes
void square(int *n);
void difference(float *n);
void ratio(double *n);

int main()
{
    void *p_temp = NULL;

    int number = 100;
    p_temp = &number;
    square(p_temp);
    printf("Value: %d\n", number);

    float number2 = 100;
    p_temp = &number2;
    difference(p_temp);
    printf("Value: %.2f\n", number2);

    double number3 = 100;
    p_temp = &number3;
    ratio(p_temp);
    printf("Value: %.6lf\n", number3);

    return 0;
}

void square(int *n)
{
    *n = *n * *n;
}

void difference(float *n)
{
    *n = *n - 42.42f;
}

void ratio(double *n)
{
    *n = (double)*n / 10e4;
}
