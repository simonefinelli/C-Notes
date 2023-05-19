/*
 * Name: main.c
 * Purpose: Write 3 functions to copy the behaviour of strlen(), strcat() and strcmp().
 * Date: 2023/05/13
 * Author: Simox
 */

#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 100

// prototypes
int get_length(const char string[]);
void concatenate(char result[], const char str1[], const char str2[]);
bool is_equal(const char str1[], const char str2[]);


int main()
{
    char str1[MAX_LENGTH] = "The Lord of the Rings";
    char str2[MAX_LENGTH] = " is the best romance.";


    int str_length = get_length(str1);
    printf("The length of the string1 is: %d\n", str_length);

    char result[MAX_LENGTH * 2];
    concatenate(result, str1, str2);
    printf("The concatenation is: %s\n", result);

    printf("The sentences are %s", (is_equal(str1, str2)) ? "equal" : "not equal");

    return 0;
}

int get_length(const char string[])
{
    int count = 0;
    for (; string[count] != '\0'; count++);

    return count;
}

void concatenate(char result[], const char str1[], const char str2[])
{
    int global_idx = 0;

    int i = 0;
    while (str1[i] != '\0') {
        result[global_idx] = str1[i];
        i++; global_idx++;
    }

    i = 0;
    while (str2[i] != '\0') {
        result[global_idx] = str2[i];
        i++; global_idx++;
    }
    result[global_idx] = '\0';
}

bool is_equal(const char str1[], const char str2[])
{
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return true;
    else
        return false;
}
