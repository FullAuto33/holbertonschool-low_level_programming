
#include "main.h"

/**
 * print_triangle -  function that prints a triangle, followed by a new line.
 * @size:  is the size of the triangle
 *
 * Return: Always 0.
*/

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
for (i = 0; i < size; i++)
{
for (j = 0; j < (size - i) - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
