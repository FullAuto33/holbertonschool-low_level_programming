#include "main.h"
#include <stdio.h>


/**
 * print_array - print array
 *
 *@a : array
 *
 *@n : integer
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int compteur = 0;
int arrays;
if (n < 1)
{
compteur = 0;
}
else
{
compteur = 1;
}
for (; compteur < n; compteur++)
{
arrays = a[compteur];
if (compteur != n - 1)
{
printf("%d, ", arrays);
}
else
{
printf("%d\n", arrays);
}
}
}
