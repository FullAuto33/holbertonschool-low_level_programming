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
int compteur = 0;
int space = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (compteur < n)
{
while (space < compteur)
{
_putchar(' ');
space++;
}
_putchar('\\');
_putchar('\n');
compteur++;
space = 0;
}
}
}
