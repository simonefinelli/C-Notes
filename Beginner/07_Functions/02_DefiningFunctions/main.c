/*
 * A Function can be defined using these elements:
 *  - function header, containing:
 *     - the return data type (if any values to return);
 *     - the name of the function;
 *     - parameters (if any) between ().
 *  - a {;
 *  - the content of the body to perform some actions;
 *  - a }.
 *
 *  General form:
 *  return_type function_name (type1 param1, type2 param2, ...)
 *  {
 *      // statements
 *
 *      return return_type;
 *  }
 *
 *  TIP: The names of functions must be meaningful! This can help the reader
 *  and yourself to understand the code even after a long time, improving the
 *  readability.
 *
 *  NOTE: To use a function in the main, the compiler have to know about the
 *  function itself. To do this we can use 2 approaches:
 *   - declare the function before the main() - like print_message();
 *   - use a Prototype before the main() and implement that function after the
 *      main().
 *
 *   Prototypes, normally, appear to the beginning of a source file and in header
 *   files. They allow any of the functions in the file to call any function
 *   regardless of where you have placed their implementation.
 */

#include <stdio.h>
#include <string.h>

// prototypes
char* custom_greeting(const char* str);  // we use const because the str var does not change by the function

// the function does not return/accept anything
void print_message (void)  // void in () can be omitted (like main())
{
    printf("Custom message here!\n");
    // return is omitted because the function does not return anything
}

int main()
{
    print_message();

    char* str_custom = custom_greeting("Gandalf");
    printf("\n%s\n", str_custom);
}

char* custom_greeting(const char* str)
{
    char str1[100] = "Hello, ";
    return strcat(str1,  str);
}
