#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print number digit.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
char number;
for (number = 0; number <= 9; number++)
{
_putchar('0' + number);
}
_putchar('\n');
}
