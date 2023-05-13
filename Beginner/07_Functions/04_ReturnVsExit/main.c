/*
 * There are 2 modes to leave from a Function:
 *  - return statement: return the control to the function caller;
 *  - exit statement: stop the execution in any place;
 *
 *  NOTE: return stop the execution only when it is done in the main()!
 */

#include <stdio.h>
#include <stdlib.h>

void enjoy_message()
{
    printf("The number entered is positive!\n");
    return;  // can be omitted - here the control is returned to the main()
}

void exit_with_success()
{
    exit(EXIT_SUCCESS);  // or exit(0)
    // the program terminates here, and not return the control to the main()
}

void exit_with_error()
{
    exit(EXIT_FAILURE);  // or exit(1)
    // the program terminates here, and not return the control to the main()
}


int main()
{
    int usr_input;
    printf("Enter a positive integer: ");
    scanf("%d", &usr_input);

    if (usr_input> 0) {
        enjoy_message();
        exit_with_success();
    } else {
        exit_with_error();
    }

    return 0;  // the program terminates here
}
