/*
 * Name: main.c
 * Purpose: Guess the number (0-20) in 5 moves.
 * Date: 2023/05/03
 * Author: Simox
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER 20
#define LOWER 0
#define MAX_ATTEMPTS 5

int main()
{
    unsigned secret_num, usr_number;

    // current time as seed for the generator
    srand(time(0));
    // generate the random value
    secret_num = (rand() % (UPPER - LOWER + 1)) + LOWER;

    printf("Hi! This is a guessing game.\n");
    printf("You have to guess my extracted number between 0 and 20.\n");

    unsigned count = 1;
    do {
        printf("\nEnter a number: ");
        scanf("%u", &usr_number);

        if (usr_number == secret_num) {
            printf("\nAwesome, the number is correct!\n");
            break;
        } else {
            if (usr_number > secret_num) {
                printf("Sorry, your number is bigger!\n");
            } else {
                printf("Sorry, your number is smaller!\n");
            }
        }
        count++;
    } while (count <= MAX_ATTEMPTS);

    if (count <= MAX_ATTEMPTS) {
        printf("You guessed the number in %u attempts!\n", count);
    } else {
        printf("The number of attempts are finished! The number was "
               "%u.\n", secret_num);
    }

    return 0;
}
