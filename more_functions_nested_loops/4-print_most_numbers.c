#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print number digit but no 2 and 4.
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
char number;
for (number = 0; number <= 9; number++)
{
if (number != 2 && number != 4)
{
_putchar('0' + number);
}
}
_putchar('\n');
}