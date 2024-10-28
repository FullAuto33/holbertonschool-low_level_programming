#include "main.h"

/**
 * print_square - print square with hashtag
 *
 * @size : size of the square
 *
 * Return: Always 0.
 */

void print_square(int size)
{
int compteur;
int vertical;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (compteur = 0; compteur < size; compteur++)
{
for (vertical = 0; vertical < size; vertical++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
