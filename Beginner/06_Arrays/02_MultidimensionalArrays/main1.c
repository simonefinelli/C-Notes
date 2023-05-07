/*
 * Just as we can assign initial values to variables (declaration), we can also
 * assign initial values to a multi-dim array.
 *
 * There are many methods to do that; below some examples.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    // complete initialization
    int scores[3][3] = {{0, 0, 0},
                        {0, 0, 0},
                        {0, 0, 0},};


    // partial initialization
    double sequence[20][40] = {{24.0, 9.0},
                               {34.3, 324.76, 0.32}}; // other row items set to 0.0

    // partial and specific initialization (from C99)
    float temperatures[5][5] = {[2][3] = 13.4f, [0][1] = 2.9f}; // other row items set to 0.0f

    // user initialization using loop constructs (see main.c)

    /*
    * Warning
    * There is no way to specify a value that initialize all
    * the multi-dim array! We have to use a loop:
    */
    for (int r = 0; r < 5; r++)
        for (int c = 0; c < 5; c++)
            temperatures[r][c] = 0.0f;  // now we are sure that all the items are 0.0f

    return 0;
}