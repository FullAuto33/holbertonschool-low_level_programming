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
for (; compteur < n; compteur++)
{
arrays = a[compteur];
printf("%d, ", arrays);
}
printf("\n");
}
