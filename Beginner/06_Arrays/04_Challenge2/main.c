/*
 * Name: main.c
 * Title: Wather Program.
 * Purpose: Check the yearly rainfall and the monthly average per year.
 * Date: 2023/05/06
 * Author: Simox
 */

#include <stdio.h>

#define YEARS 5
#define MONTHS 12

int main()
{
    float years_mean[YEARS];
    float months_mean[MONTHS];
    float partial_total;

    // dataset
    char* years[YEARS] = {"2018", "2019", "2020", "2021", "2022"} ;
    char* months[MONTHS] = {"Gen", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"} ;
    float obsevations[YEARS][MONTHS] = {
            {110.20f, 97.01f, 81.78f, 71.89f, 54.89f, 33.00f, 23.01f, 22.32f, 52.09f, 121.81f, 100.51f, 89.59f},
            {108.20f, 93.01f, 83.78f, 70.89f, 52.89f, 37.00f, 21.01f, 25.32f, 50.09f, 121.81f, 110.51f, 90.59f},
            {112.20f, 92.01f, 88.78f, 73.89f, 55.89f, 30.00f, 22.01f, 27.32f, 52.09f, 128.81f, 108.51f, 89.59f},
            {117.20f, 92.01f, 86.78f, 72.89f, 52.89f, 32.00f, 21.01f, 29.32f, 56.09f, 117.81f, 104.51f, 91.59f},
            {105.20f, 98.01f, 85.78f, 70.89f, 58.89f, 33.00f, 25.01f, 27.32f, 55.09f, 120.81f, 102.51f, 88.59f},
    };


    // calculate the yearly average
    partial_total = 0.0f;
    for (int y = 0; y < YEARS; y++) {
        float year_total = 0.0f;
        for (int m = 0; m < MONTHS; m++) {
            year_total += obsevations[y][m];
        }
        years_mean[y] = year_total / MONTHS;
        partial_total += years_mean[y];
    }

    // calculate the monthly average
    for (int m = 0; m < MONTHS; m++) {
        float month_total = 0.0f;
        for (int y = 0; y < YEARS; y++) {
            month_total += obsevations[y][m];
        }
        months_mean[m] = month_total / YEARS;
    }

    // print statistics
    printf("YEAR RAINFALL AVERAGE (mm)\n");
    for (int i = 0; i < YEARS; i++)
        printf("%s - %.2f\n", years[i], years_mean[i]);
    printf("\nThe average of all 5 years is: %.2f\n", partial_total/YEARS);

    printf("\nMONTH RAINFALL AVERAGE (mm)\n");
    for (int i = 0; i < MONTHS; i++)
        printf("%s - %.2f\n", months[i], months_mean[i]);

    return 0;
}

