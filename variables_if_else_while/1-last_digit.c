#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Print number and last digit
*
* Return: Always 0 (Success)
*/

int main(void)
{
int last_digit;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last_digit = n % 10;
printf("Last digit of %d is %d and is ", n, last_digit);
if (last_digit > 5)
{
printf("greater than 5\n");
}
else if (last_digit == 0)
{
printf("0\n");
}
else if (last_digit < 6 && last_digit != 0)
{
printf("less than 6 and not 0\n");
}
return (0);
}
