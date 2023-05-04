/*
 * Name: main.c
 * Purpose: Calculate the weekly pay.
 * Description: The program calculates the net payroll taking into account the
 *              taxes. Below all the info:
 *              - Basic pay: $12.00/hr
 *              - Overtime (in excess of 40 hours): time and a half
 *              - Tax rate:
 *                  15% - until $300.00
 *                  20% - next $150.00
 *                  25% - on the rest
 * Date: 2023/04/28
 * Author: Simox
 */

#include <stdio.h>

#define BASIC_PAY 12.00
#define OVERTIME_PAY (BASIC_PAY * 1.5)
#define TAX_RATE_300 0.15
#define TAX_RATE_301_450 0.20
#define TAX_RATE_451 0.25

int main()
{
    unsigned work_hours = 0;
    double basic_pay, overtime_pay = 0.0, gross_pay, total_taxes = 0.0;

    printf("Please enter the number of work hours: ");
    scanf("%u", &work_hours);

    if (work_hours <= 0) {
        printf("Go to work! :)");
        return 0;
    }

    // calculate total pay
    if (work_hours <= 40) {
        basic_pay = work_hours * BASIC_PAY;
    } else {
        unsigned overtime_hours = work_hours - 40;
        basic_pay = 40 * BASIC_PAY;
        overtime_pay = overtime_hours * OVERTIME_PAY;
    }
    gross_pay = basic_pay + overtime_pay;

    // calculate taxes
    if (gross_pay > 450) {
        total_taxes += 300 * TAX_RATE_300;
        total_taxes += 150 * TAX_RATE_301_450;
        total_taxes += (gross_pay - 450) * TAX_RATE_451;
    } else if (gross_pay > 300) {
        total_taxes += 300 * TAX_RATE_300;
        total_taxes += (gross_pay - 300) * TAX_RATE_301_450;
    } else {
        total_taxes += gross_pay * TAX_RATE_300;
    }

//    // calculate taxes alternative
//    if (gross_pay <= 300) {
//        total_taxes += gross_pay * TAX_RATE_300;
//    } else if (gross_pay > 300 && gross_pay <= 450) {
//        total_taxes += 300 * TAX_RATE_300;
//        total_taxes += (gross_pay - 300) * TAX_RATE_301_450;
//    } else {
//        total_taxes += 300 * TAX_RATE_300;
//        total_taxes += 150 * TAX_RATE_301_450;
//        total_taxes += (gross_pay - 450) * TAX_RATE_451;
//    }

    // show results
    printf("Basic pay: $%g\n", basic_pay);
    printf("Overtime pay: $%g\n", overtime_pay);
    printf("Gross pay: $%g\n", gross_pay);
    printf("Taxes: $%g\n", total_taxes);
    printf("Net pay: $%g\n", gross_pay - total_taxes);

    return 0;
}
