
#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 * @size:  is the size of the triangle
 *
 * Return: Always 0.
*/

void print_triangle(int size)
{
  int i, j, k;
if (size <= 0)
{
_putchar('\n');
}
else
for (i = 0; i < size; i++)
{
  /* boucle pour afficher les espaces*/ 
for (j = 0; j < 2 * (size - i) - 1; j++)
{
_putchar(' ');
}
/* boucle pour afficher les hastags*/
for (k = 0; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
