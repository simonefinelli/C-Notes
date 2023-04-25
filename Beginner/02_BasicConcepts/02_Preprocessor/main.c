/*
 * The Preprocessor recognizes special statements in the code.
 * It analyzes these statements before the analysis of the program.
 * It can be used to instruct the compiler: to do something before compiling
 * the source code.
 * The statements could be anywhere in the code, typically at the beginning.
 *
 * A Preprocessor statement (directive) is identified by '#' as first character
 * of the line.
 * There are many directives: #define (to create constants), #include (to use
 * libraries), #ifdef (conditional choices), etc.
 *
 * A typical directive is the '#include'. This directive tells the compiler to
 * "include" in the program the contents of the file 'stdio.h'. A file with .h
 * extension is called Header.
 *
 * A Header file defines information about the functions in it. For example, the
 * stdio.h is the standard C library header that provides methods to displaying
 * output (and many other things). So, we need it to use printf function!
 *
 * TIP: If we write #include <library.h> the preprocessor will look in the
 * system directories, while writing #include "library.h" it will look first
 * in the current directory.
 */

#include <stdio.h>  // preprocessor directive

int main()
{
    printf("Hello, World!\n");
    return 0;
}
