#include "main.h"

/**
 * more_numbers - print number 10 times.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int number;
char compteur;
for (compteur = 0; compteur < 9; number++)
{
for (number = 0; number <= 14; number++)
{
if (number > 9)
{
_putchar('0' + number / 10);
}
_putchar('0' + number % 10);
}
_putchar('\n');
}
}
