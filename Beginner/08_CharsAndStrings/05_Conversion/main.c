/*
 * Other useful functions, while dealing with strings or chars, are the converting
 * functions:
 *
 * - Conversion on Strings/Chars
 *    - toupper() - converts a char from lower case to upper case;
 *    - tolower() - converts a char form upper case to lower case.
 *
 *     Remember that these functions return an int, so we need to explicit the
 *     cast to a char.
 *
 *  - Conversion String/Char to other type
 *    - atof() - converse string to a double;
 *    - atoi() - converts string to an int;
 *    - atol() - converts string to a long;
 *    - atoll() - converts string to a long long;
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main() {
    /*
     * char/string to char/string
     */
    char text[100] = "Lorem ipsum Dolor sit AMet";
    char substring[100] = "IpSuM";

    // convert to lower and check
    for (int i=0; (text[i] = (char)tolower(text[i])) != '\0'; i++);
    for (int i=0; (substring[i] = (char)tolower(substring[i])) != '\0'; i++);

    printf("%s\n", text);
    printf("%s\n", substring);
    printf("The second string %s found in the first one.\n",
           (strstr(text, substring) == NULL) ? "was not" : "was");

    /*
     * char/string to char/string
     */
    char onehundred[] = "100";
    int i = atoi(onehundred);
    printf("The variable i is: %d\n", i);

    char temp[] = "42.5";
    double d = atof(temp);
    printf("The variable d is: %.2lf\n", d);

    return 0;
}
