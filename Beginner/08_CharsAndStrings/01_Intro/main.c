/*
 * The concept of Strings not exist in C language, but we can still handle
 * strings using characters.
 *
 * In C a string constant (or literal) is a sequence of characters between a
 * pair of double-quote.
 *
 * ATTENTION: in C character and strings are not the same. Indeed, a char is
 * expressed by '', while a string using "".
 *
 * What happens in the memory is described below:
 *
 *           *  S  *  t  *  r  *  i  *  n  *  g  * \0  *
 *           * * * * * * * * * * * * * * * * * * * * * *
 * address    0x00  0x08  0x10  0x18  0x20  0x28   0x30
 *
 * Note that in C every string ends with the null character '\0', so the total
 * size is always one greater than the number of characters of the string. The
 * null character is added by default.
 *
 * Warning: do not confuse null character with NULL reserved word:
 *  - null character is a string terminator;
 *  - NULL represents a memory address that does not reference anything.
 */

#include <stdio.h>

int main() {
    /*
     * String declarations
     */
    char string[15];  // the string can handle up to 14 characters, the 15th is the '\0'

    char string1[] = {'H', 'i', '!'};

    char string2[42] = "A string literal";
    // in this case we will initialize only the first 16 chars and the 16th
    // will contain the null character. Note, however, the space allocated in memory
    // is for all 42 elements of the array.

    /*
     * Assigning a new value to an existing string
     */
    //  - Wrong
    // string2 = "ciao"; // compile error! we have to use strncpy() to assign
    // a new value to an already declared string.

    // - Right
    string2[0] = 'N';
    string2[1] = 'E';
    string2[2] = 'W';
    string2[3] = '\0';

    printf("%s\n", string2);

    /*
     * Entering a string
     */
    char input[100];
    printf("\nEnter your nickname: ");
    scanf("%s", input);  // no '&' need
    printf("\nYou are entered: %s\n", input);

    /*
     * Testing two string
     */
    // We cannot test two string with == operator ( if (string1 == string2).
    // This type of statement will test the address of the first char of the two strings are equal.
    // To achieve that we have to use the strcmp() function (see next lessons).

    return 0;
}
