/*
 * We now that arrays are relate to Pointers in C language, so even Strings
 * (arrays of characters) are related too.
 */

#include <stdio.h>

// prototypes
void string_copy(char *str1, char *str2);

int main()
{
    char *string1 = "Sentence 1";
    char string2[100] = {'\0'};

    string_copy(string1, string2);

    printf("The second string has value: %s\n", string2);
    return 0;
}

void string_copy(char *str1, char *str2)
{
    while (*str1) {  // null char ('\0') is equal to 0 (i.e. false)
        *str2++ = *str1++;
    }
    *str2 = '\0';
}
