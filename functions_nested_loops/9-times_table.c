#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: Always 0.
*/



void times_table(void)
{
int num1, num2, mul;
for (num1 = 0; num1 <= 9; num1++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (num2 = 1; num2 <= 9; num2++)
{
mul = num1 * num2;
if (mul <= 9)
_putchar(' ');
else
{
_putchar('0' + (mul / 10));
}
_putchar('0' + (mul % 10));
if (num2 < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
