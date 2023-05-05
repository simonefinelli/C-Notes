/*
 * The C language programming admits two statements: break and continue.
 * That statements are used to manipulate the flow of loops:
 *  - break stop the current iteration and exit from the construct (for, while, etc.);
 *  - continue stop the current iteration and jump to the next one.
 *
 *  These kind of statements can be useful in nested loops, or in particular
 *  situation where it is useless to continue through the entire cycle of the
 *  loop.
 */

#include <stdio.h>

int main()
{
    enum day {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

    printf("Continue\n");
    for (enum day d = Mon; d <= Sun; d++) {
        if (d == Wed) continue;

        // do something with other days different from Wednesday
        printf("Day of week: %d\n", d);

    }

    printf("\nBreak\n");
    for (enum day d = Mon; d <= Sun; d++) {
        if (d == Wed) break;

        // do something with other days before Wednesday
        printf("Day of week: %d\n", d);

    }

    return 0;
}
