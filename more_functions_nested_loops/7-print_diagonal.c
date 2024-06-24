#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: Always 0.
*/


void print_diagonal(int n)
{
int compteur;
int espace;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (compteur = 0; compteur < n; compteur++)
{
for (espace = 0; espace < compteur; espace++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
