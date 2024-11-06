#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print somme diagonal
 *@a: array diagonal
 *@size: size of a
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
int compteur = 0;
int x = 0;
int y = 0;
int taille = size + 1;
int taillemoins = size - 1;

for (; compteur < (size * size); compteur = compteur + taille)
{
x = a[compteur] + x;
}
for (compteur = taillemoins; compteur < (size * taillemoins);
compteur = taillemoins)
{
y = a[compteur] + y;
}
printf("%d, %d\n", x, y);
}
