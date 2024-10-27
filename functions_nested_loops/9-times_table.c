#include "main.h"

/**
 * times_table - print 9 table times
 *
 * Return: Always 0.
 */

void times_table(void)
{
int num1;
int num2;
int mult;
int lastdigit;
int resul;

for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
mult = num1 * num2;
if (mult > 9)
{
lastdigit = mult % 10;
resul = (mult - lastdigit) / 10;
_putchar(44);
_putchar(32);
_putchar('0' + resul);
_putchar('0' + lastdigit);
}
else
{
if (num2 != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(mult + '0');
}
}
_putchar('\n');
}
}
