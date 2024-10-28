#include "main.h"

/**
 * more_numbers - print number 10 times.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int number;
int compteur;
for (compteur = 0; compteur <= 10; number++)
{
for (number = 0; number <= 14; number++)
{
_putchar('0' + number);
}
_putchar('\n');
}
}
