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
{
if (n > 5)
printf("greater than 5", n);
}
if (n == 0)
printf("equal to 0", n);
{
if (n < 6 && n != 0)
printf("less than 6 and  not equal to 0", n);
}
{
if (n <= 0)
printf("last digit of %d is less than or equal 0", n);
}
return (0);
}
