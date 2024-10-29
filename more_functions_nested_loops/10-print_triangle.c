#include "main.h"

/**
 * print_triangle - print triangle with hashtag
 *
 * @size : size of the triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
int compteur = 0;
int space = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (compteur < size)
{
while (space < size)
{
_putchar(' ');
space++;
}
_putchar('#');
_putchar('\n');
compteur++;
space = 0;
}
}
}
