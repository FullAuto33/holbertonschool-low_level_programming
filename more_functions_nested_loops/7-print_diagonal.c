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
int space;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (compteur = 0; compteur < n; compteur++)
{
for (space = 0; space < n; space++)
{
_putchar(' ');
}
}
_putchar('\\');
_putchar('\n');
}
}
