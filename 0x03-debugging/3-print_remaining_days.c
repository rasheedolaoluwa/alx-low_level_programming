#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Prints the remaining days of a year
 *                        from a given date.
 * @month: The month as an integer (from 1 to 12).
 * @day: The day of the month as an integer.
 * @year: The year as an integer.
 *
 * Return: Void.
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 2 || (month == 2 && day >= 60))
			day++;

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
