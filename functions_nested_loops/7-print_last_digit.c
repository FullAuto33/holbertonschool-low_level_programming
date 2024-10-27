#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 *@n : number
 *
 * Return: Always 0.
 */


int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
_putchar('0' + lastdigit);
return (lastdigit);
}
_putchar('0' + lastdigit);
return (lastdigit);
}
