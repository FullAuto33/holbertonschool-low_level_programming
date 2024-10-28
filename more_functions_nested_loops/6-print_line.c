#include "main.h"

/**
 * print_line - print linebas
 *
 * @n : number of line
 *
 * Return: Always 0.
 */

void print_line(int n)
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
_putchar('0' + 98);
}
_putchar('\n');
}
}
