#include "main.h"
#include "/holbertonschool-low_level_programming/functions_nested_loops/main.h"
#include <stdio.h>

/**
 * print_numbers - print number digit.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
char number;
for (number = 48; number <= 57; number++)
{
_putchar('0' + number);
}
_putchar('\n');
}
