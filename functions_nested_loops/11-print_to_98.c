#include "main.h"

/**
 * print_to_98 - check the code
 *
 *@n : number
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
if (n > 98)
{
for (; n >= 98; n--)
{
if (n == 98)
{
_putchar('0' + n);
_putchar('\n');
}
else
{
_putchar('0' + n);
}
}
}
else
{
for (; n <= 98; n++)
{
if (n == 98)
{
_putchar('0' + n);
_putchar('\n');
}
else
{
_putchar('0' + n);
}
}
}
}
