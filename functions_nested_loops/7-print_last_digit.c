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
int abs;
int lastdigit;
if (n < 0)
{
abs = n * -1;
lastdigit = abs % 10;
_putchar('0' + lastdigit);
return (lastdigit);
}
lastdigit = n % 10;
_putchar('0' + lastdigit);
return (lastdigit);
}
