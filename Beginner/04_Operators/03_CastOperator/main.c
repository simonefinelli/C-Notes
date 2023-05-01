/*
 * Conversion of data type is a common practice in programming. The C language
 * can do implicit or explicit (using the cast operator) conversion. For example
 * an int can be converted in double, a double in int, etc.
 * Note that during the conversions we can lose some information: for example
 * converting a Double to an Int (demotion). But, we can also convert an Int
 * to a Double without lose precision (promotion).
 *
 * For that reasons, normally, we must clarify the conversion using the cast
 * operator (in order to make it clear that the conversion is intentional and
 * not involuntary).
 */

#include <stdio.h>

int main()
{
    /* implicit conversion */
    int n1 = 1.72;  // implicit conversion (demotion - lost of information)
    printf("%d", n1);
    double n2 = 130; // implicit conversion (promotion)
    printf("\n%lf", n2);

    /* explicit conversion */
    float n3 = 42;  // promotion (good approach)
    printf("\n%f", n3);
    float n4 = (float)42;  // promotion (better approach) - using the cast operator '(float)'
    printf("\n%f", n4);
    int n5 = (int)100.67;  // demotion (right approach) - - using the cast operator '(int)'
    printf("\n%d", n5);

    /* implicit conversion in expressions */
    int sum = 12.45 + 5.12;  // implicit demotion (wrong approach)
    printf("\n%d", sum);
    float diff = 34.01 - 23.65;  // implicit demotion from double to float (wrong approach)
    printf("\n%f", diff);

    /* explicit conversion */
    int right_sum = (int)12.45 + (int)5.12;  // explicit demotion (right approach)
    printf("\n%d", right_sum);
    double right_div = (double)34 / 23;  // explicit promotion (right approach)
    printf("\n%lf", right_div);

    return 0;
}
