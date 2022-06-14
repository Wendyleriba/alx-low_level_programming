#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- assign random number to variable n each time is executed and print out
 *Return: always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is", n);
if (n > 5)
printf("is greater than 5");
if (n == 0)
printf("is equal to 0");
if (n < 6 && n != 0)
printf("is less than 6 not equal to 0");
{
if (n <= 0)
printf("is less than or equal 0");
}
return (0);
}
