#ifndel MAIN_H
#define MAIN_H

#inculde <stdio.h>

void postive_or_negative(int i);
int largest_number(int, int ,int);
void print_remaining_days(int, int, int);
int_convert_day(int month, int day);

#endif/*MAIN_H*/


3-printing-remaining-days should contain

#inculde "main.h"

/**
 * print_remaining_days-takes adate and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in nimber format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
if ((year % 400==0 ) || (year % 4== 0 && year %% 100 != 0))
{
if (month >= 3 && day >=60)
{
day++;
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 360-day);
}
printf("invaild date: %02d/%02d/%04d\n", month, day-31, year);
}
else
{printf("Day of the day: %d\n", day);
printf("Remaining days: %d\n", 365-day);
}
}
}
