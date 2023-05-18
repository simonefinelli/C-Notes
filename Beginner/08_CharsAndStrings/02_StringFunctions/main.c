/*
 * The C language provides many functions to manage strings.
 *
 * The most common are:
 *    - strlen() - length of a string
 *    - strcpy() and strncpy() - copying one character string to another
 *    - strcat() and strncat() - strings concatenation
 *    - strcmp() and strncmp() - check if two strings are equal
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[25] = "The Lord of the Rings";
    printf("%s\n", s);

    // string size
    size_t length = strlen(s);
    printf("The size of the string is: %zu\n", length);

    // copying - strcpy()/strncpy() is equivalent to the assignment operator
    char s1[50];
    strcpy(s1, "Gandalf the Gray");  // does not check if the src fits in dest
    printf("The copied string is: %s\n", s1);

    memset(s, '\0', sizeof(s));  // reset the string
    strncpy(s, "Gandalf the Gray is on the way", 50);  // warning if the string not fits (try to put the string anyway - indefinite behaviour)
    printf("The copied string is: %s\n", s);

    // concatenation
    char start[100] = "Hello ";
    char end[] = "World!";
    strcat(start, end);
    printf("The concatenation is: %s\n", start);

    char start1[100] = "Hello ";
    char end2[] = "World!";
    strncat(start1, end2, 3);  // the 3rd argument indicates the maximum number of chars to add
    printf("The concatenation is: %s\n", start1);

    // Comparing
    // The strcmp() returns 0 if the 2 strings are equals, < 0 is str1 < str2, and > 0 if str1 > str2
    int result = strcmp("A", "A");
    printf("A == A: %d\n", result);
    result = strcmp("A", "B");
    printf("A == B: %d\n", result);
    result = strcmp("b", "A");
    printf("b == A: %d\n", result);
    result = strcmp("Gandalf", "Frodo");
    printf("Frodo == Gandalf: %d\n", result);

    // The strncmp() compares strings until it has compared a number of chars specified
    result = strncmp("Long string", "Long string 2", 4);
    printf("Long string == Long string 2: %d\n", result);



    return 0;
}
