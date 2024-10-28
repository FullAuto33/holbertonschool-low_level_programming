#include "main.h"

/**
 * print_diagonal - print slashbar
 *
 * @n : number of slashbar
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int compteur;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (compteur = 0; compteur < n; compteur++)
{
_putchar('\\');
}
_putchar('\n');
}
}
