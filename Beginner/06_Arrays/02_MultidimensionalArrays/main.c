/*
 * As the word say, multidimensional arrays, are arrays with 2 or more dimensions.
 * Arrays with one dimension are called linear array; arrays with 2 dimensions
 * are called matrix. Over 2 dimension we call them N-dim arrays.
 *
 * Multidimensional arrays follow the same rules of arrays:
 * - a multi-dim array can contain only items of the same data type;
 * - a multi-dim array have a defined and fix length (strict but efficient).
 *
 * We can declare an Array as follows:
 *  type arr_name[max_size_1][max_size_2];
 *   - type: int, unsigned, long, double, etc;
 *   - [][]: tells the compiler that the var is an array with 2 dimensions;
 *   - max_size_1: the length (size or dimension) of the first array dimension (row).
 *   - max_size_1: the length (size or dimension) of the second array dimension (column).
 *
 * To access a multi-dim array's elements we can use the element index (int) and [][]:
 *  - arr[0][3]: we are retrieving the item in the row 1st and column 4th.
 *
 * We can assign values to array's items using the assign operator (=) and the
 * [][]:
 *  - arr[2][5] = 42;
 *
 *  * For the initialization view main1.c.
 */

/*
 * It is very common to in a program to store equal data in an organized way.
 * One way is to use the Arrays.
 *
 * In C arrays allow you to group values together in a single variable.
 * Arrays in C have some typical characteristics:
 * - an Array can contain only items of the same data type;
 * - an Array have a defined and fix length (strict but efficient).
 *
 * We can declare an Array as follows:
 *  type arr_name[max_size];
 *   - type: int, unsigned, long, double, etc;
 *   - []: tells the compiler that the var is an array;
 *   - max_size: the length (size or dimension) of the array.
 *
 * Warning: Arrays' indexes in C start from 0!
 *
 * To access an array's elements we can use the element index (int) and []:
 *  - arr[0]: we are retrieving the item in the first position of the array.
 *
 * TIP: elements of an arrays are store sequentially in memory, so the addresses
 * are progressive.
 *
 * Warning: if we try to access an index that do not exist, the program will
 * crash or return garbage data (we have an 'out of bound error').
 *
 * We can assign values to array's items using the assign operator (=) and the
 * []:
 *  - arr[1] = 42;
 *
 * For the initialization view main1.c.
 */

#include <stdio.h>

int main()
{
    int row = 3;
    int col = 3;
    int scores[row][col];
    int total = 0;

    // get user input
    printf("Please put numbers in 3x3 matrix:\n");
    for (unsigned i = 0; i < row; i++ ) {
        for (unsigned j = 0; j < col; j++ ) {
            printf("[%u][%u] > ", i, j);
            scanf("%d", &scores[i][j]);

            total += scores[i][j];
        }
    }

    // calculate mean
    printf("\nThe mean is: %.2lf", (double)total/(row * col));

    return 0;
}
