/*
 * Name: main.c
 * Purpose: Find the first 100 prime numbers.
 * Date: 2023/05/05
 * Author: Simox
 */

#include <stdio.h>
#include <stdbool.h>

#define PRIMES_TO_FIND 1000

int main()
{
    int primes[PRIMES_TO_FIND] = {2, 3};
    bool is_prime;

    // find primes
    for (int n = 5; primes[PRIMES_TO_FIND-1] == 0; n += 2) {
        is_prime = true;

        // check if there is at least one divisor from founded primes
        int i = 0;
        while (primes[i] != 0) {
            if (n % primes[i] == 0) {
                is_prime = false;  // used as flag
                break;  // number not prime
            }
            i++;
        }

        // if the check above failed, the number is prime
        if (is_prime)
            primes[i] = n;
    }

    // print primes
    for (int i = 0; i < PRIMES_TO_FIND; i++ ) {
        printf("%3d\n", primes[i]);
    }

    return 0;
}
