/*
 * Data Types are very important, indeed they tell the Compiler how much memory
 * must be allocated.
 *
 * There are a lots of Data types (here the most used):
 * - int (to handle signed integer values)
 * - float (to handle signed decimal number)
 * - double (same as float, but with a larger precision)
 * - char (to handle single chars or strings (as array of chars))
 * - _Bool (to handles boolean values - 0 or 1)
 * The difference between the types is the amount of memory they occupy (RAM)
 * and the range of values they can hold. That depends on the machine where the
 * code is running!
 *
 * TIP: constant decimal numbers are handled as double by the Compiler. To force
 * it to read the variable as float we have to put the letter f before the
 * number (e.g. 4.2f).
 *
 * WARNING: in C a value is False only if it is equal to 0, True otherwise!
 *
 * We can also use the short, long and unsigned version of int, float and
 * double. That permits to have a meticulous memory and value ranges management.
 *
 * Another important data type is the Enum. This type allows to define a
 * variable and specify only the valid values for that variable.
 * E.G. enum primary {R, G, B};
 * The Compiler treats enumeration choices as integer, so R = 0, B = 1,
 * and so on. But we can explict set index numbers (for all entries or not).
 *
 * NOTE: for each data type we must use the correct format specifier
 * (https://en.wikipedia.org/wiki/C_data_types) if we want to perform on them IO
 * operation, like printing on terminal.
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    // integers
    int age = 42;
    printf("%d\n", age);

    // decimal numbers
    float distance = 12.4f;
    printf("%f\n", distance);

    // decimal numbers (using higher precision)
    double temperature = 21.66;
    double sun_mass = 1.98892e30; // mass of the sun in Kg
    printf("%lf\n", temperature); // or %g to remove zeros
    printf("%e\n", sun_mass);

    // characters
    char letter = 'A';
    char name[30] = "Gandalf";
    printf("%c\n", letter);
    printf("%u\n", letter);  // int value of 'A' in the ASCII table
    printf("%s\n", name);

    // booleans
    int true_value = 1;    // C90
    int false_value = 0;   // C90
    _Bool flag = 0;        // in C99
    bool is_valid = true;  // in C99 - #include <stdbool.h> is required
    printf("%d\n", true_value);
    printf("%d\n", false_value);
    printf("%d\n", flag);
    printf("%d\n", is_valid);

    // short, unsigned and long ints
    unsigned planets = 8;
    short moons = 18;
    long galaxies = 100000000000;
    long long stars = 1000000000000000000L;
    printf("%u %hd %ld %lld\n", planets, moons, galaxies, stars);

    // short, unsigned and long doubles
    // unsigned double  // not allowed (no sense due to double structure)
    // short double // invalid
    long double big_double = 9000000000000000000000.0;
    // long long double stars // invalild
    printf("%Lf \n", big_double);

    // enums
    // declaration
    enum primary {RED, GREEN, BLU};
    enum rubik_face {W = 1, Y = 2, O = 7, R = 10, G, B};

    // usage
    enum primary first_color = RED;
    // enum primary first_color = YELLOW;  // compiler error
    enum rubik_face start_face = B;
    printf("%u %u", first_color, start_face);

    return 0;
}
