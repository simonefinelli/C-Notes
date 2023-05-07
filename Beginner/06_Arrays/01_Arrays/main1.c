/*
 * Just as we can assign initial values to variables (declaration), we can also
 * assign initial values to an array.
 *
 * There are many methods to do that; below some examples.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    // complete initialization
    int scores[5] = {0, 0, 0, 0, 0};

    // partial initialization
    double sequence[42] = {0.0, 0.0};  // other items set to 0.0

    // partial and specific initialization (from C99)
    float temperatures[1000] = {[442] = 13.4f, [0] = 2.9f};  // other items set to 0.0

    // user initialization using loop constructs (see main.c)

    /*
    * Warning
    * There is no way to specify a value that initialize all
    * the multi-dim array! We have to use a loop:
    */
    for (int i = 0; i < 1000; i++) {
        temperatures[i] = 0.0f;  // now we are sure that all the items are 0.0f
    }

    /* ************************************************************* *
     * ATTENTION: since C99 we can use variable-length arrays (VLA)! *
     * ************************************************************* */
    unsigned length = 5;
    double altitude[length];  // we can use the var length to set le dimension of the array
    for (int i = 0; i < length; i++) {
        altitude[i] = 0.0;
    }

    return 0;
}