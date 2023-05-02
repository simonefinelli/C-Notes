/*
 * Name: main.c
 * Purpose: Convert minutes into years and days.
 * Date: 2023/27/04
 * Author: Simox
 */

#include <stdio.h>

int main()
{
    unsigned long minutes;  // 1,844674407×10¹⁹ (8 bytes - on my pc)
    unsigned short days;
    unsigned long years;  // 365 days
    short minutes_per_day = 60 * 24;  // 1440
    int minutes_per_year = minutes_per_day * 365;  // 525600

    // get user input
    printf("Enter the number of minutes: ");
    scanf("%ld", &minutes);

    // calculate years and days
    years = minutes / minutes_per_year;
    days = (minutes % minutes_per_year) / minutes_per_day;

    // show results
    printf("Years: %ld \nDays: %hd", years, days);

    return 0;
}
