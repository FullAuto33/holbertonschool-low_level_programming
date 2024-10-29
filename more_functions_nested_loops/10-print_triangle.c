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
int hashtag;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (compteur < size)
{
hashtag = size - 1 - compteur;
while (space < size)
{
if (hashtag > space)
{
_putchar(' ');
}
else
{
_putchar('#');
}
space++;
}
compteur++;
space = 0;
_putchar('\n');
}
}
}
