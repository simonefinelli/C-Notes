/*
 * In this section we will view other useful function:
 *  - Searching chars or substrings;
 *  - Tokenizing a string: a token is a sequence of characters within a string
 *      that is bounded by a delimiter (space, comma, period, etc.);
 *      TIP: breaking a sentence into words is called tokenizing.
 *  - Analyzing strings: is lower, is upper, is digit, etc.
 *
 *  TIP: To better manage these functions we have to know about Pointers
 *       (view relative section).
 *
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    /*
     * searching characters
     *
     * strchr(arg1, arg2): searches in the string a specif char.
     *  - arg1 is the string (which will be the address of a char array);
     *  - arg2 the char that we are looking for.
     *
     *  Returns a pointer to the first position in the string where the char is
     *  found or NULL (NULL pointer represents a pointer that does not point
     *  anything).
     */
    char str[] = "The quick brown fox";
    char c = 'b';
    char *c_position = NULL;  // pointer initialized to NULL
    c_position = strchr(str, c);  // store address where c is found
    printf("The result of strchr() is: %s\n", c_position);
    printf("\n\n");

    /*
     * searching substring
     *
     * strstr(arg1, arg2): searches one string for the first occurrence of a substring.
     *  - arg1 is the string (which will be the address of a char array);
     *  - arg2 the substring that we are looking for.
     *
     *  Returns a pointer to the position in the first string where the substring
     *  is found or NULL.
     */
    char principal_string[] = "cat Dog Cat dog Dog dog!";
    char sub_string[] = "dog";
    char *s_position = NULL;  // pointer initialized to NULL
    s_position = strstr(principal_string, sub_string);  // store address where first substring is found
    printf("The result of strstr() is: %s\n", s_position);
    printf("\n\n");

    /*
     * tokenizing
     *
     * strtok(arg1, arg2): splits the sentence into word according to arg2.
     *  - arg1 is the string;
     *  - arg2 is a string containing all the possible (token);
     *
     *  Returns a pointer form the first char to the position in which the token is found.
     */
    char sentence[] = "Mon - Tue - Wed - Thu - Fri - Sat - Sun";
    const char delimeter[4] = " - ";  // remember that we deserve a string though the token is only 1 character
    char *token_pos;

    // find first split
    token_pos = strtok(sentence, delimeter);

    unsigned count = 1;
    while (token_pos != NULL) {
        printf("The result of %d° strtok() is: %s\n", count, token_pos);
        token_pos = strtok(NULL, delimeter);  // go through the next token
        count++;
    }
    printf("\n\n");


    /*
     * Analyzing strings
     *
     * There are many functions to analyze strings:
     *  - islower() - test for lower case letter
     *  - isupper() - test for upper case letter
     *  - isalpha() - test for upper or lower case letter
     *  - isalnum() - test for uppercase or lower case or digit
     *  - ...
     *
     * Each of these functions return a nonzero value of type int if the char
     * is positive to the test function. So, we can use bool values to convert
     * tests in true and false statements.
     */
    char buffer[500] = {'\n'};
    int letters = 0;
    int digits = 0;
    int punct = 0;
    int unrecognized = 0;

    printf("Enter a continuous string: ");
    scanf("%s", buffer);

    // take statistics
    int i = 0;
    while(buffer[i] != '\0')
    {
        if (isalpha(buffer[i]))
            letters++;
        else if (isdigit(buffer[i]))
            digits++;
        else if (ispunct(buffer[i]))
            punct++;
        else
            unrecognized++;
        i++;
    }

    printf("The string contains:\n"
                  " - Letters chars: %d\n"
                  " - Digits chars: %d\n"
                  " - Punctuation chars: %d\n"
                  " - Unrecognized chars: %d", letters, digits, punct, unrecognized);

    return 0;
}
