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
char tiretbas = '_';
if (n <= 0)
{
_putchar('\n');
}
else
{
for (compteur = 0; compteur < n; compteur++)
{
_putchar('0' + tiretbas);
}
_putchar('\n');
}
}
