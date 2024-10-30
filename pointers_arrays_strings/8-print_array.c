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
int tailletab = 0;
for (; a[tailletab] != 0; tailletab++)
{
}
printf("%d", tailletab);
if (tailletab == n)
{
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
else
{
return;
}
}
