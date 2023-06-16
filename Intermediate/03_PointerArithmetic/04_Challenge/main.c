/*
 * Name: main.c
 * Title: Pointers and Strings.
 * Purpose: Counting characters in a string.
 * Date: 2023/05/20
 * Author: Simox
 */

#include <stdio.h>

unsigned get_string_length(const char *s);

int main() {
    char *string = "My own sentence!.";

    unsigned length = get_string_length(string);
    printf("The string length is: %u", length);

    return 0;
}

unsigned get_string_length(const char *s)
{
//    int count = 0;
//    while (*s) {
//        count++; s++;
//    }
//    return count;

   // another way
   const char *last_add = s;

   while (*last_add)
       last_add++;

    return last_add - s;
}
