/*
 * Another way to take decisions in the C programming language is to use the
 * Switch statement.
 *
 *  switch (expression) {
 *      case Value1:
 *          statements;
 *          break;
 *      ...
 *      case ValueN:
 *          statements;
 *          break;
 *      default:
 *          statements;
 *          break;
 *  }
 *
 *  We can map same statements for the same case, without duplicate code:
 *  switch (expression) {
 *      case Value1:
 *      case Value2:
 *          statements;
 *          break;
 *      ...
 *      case ValueN:
 *          statements;
 *          break;
 *      default:
 *          statements;
 *          break;
 *  }
 *  In the above example for the case Value1 and Value2 the program execute
 *  the same statements.
 *
 *  We can use it when the choices can be several and an if statement might
 *  seem chaotic.
 */

#include <stdio.h>

int main()
{
    enum weekday {Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday,
                  Sunday};
    enum weekday today = Thursday;

    switch (today) {
        case Monday:
            printf("The first day of the week");
            break;
        case Tuesday:
            printf("The second day of the week");
            break;
        case Wednesday:
            printf("The third day of the week");
            break;
        case Thursday:
            printf("The fourth day of the week");
            break;
        case Friday:
            printf("The fifth day of the week");
            break;
        case Saturday:
            printf("The sixth day of the week");
            break;
        case Sunday:
            printf("The seventh day of the week");
            break;
        default:
            printf("Week day not recognized!");
            break;
    }

    return 0;
}
