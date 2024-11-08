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
int diag1 = 0;
int diag2 = 0;
int compteur;
for (compteur = 0; compteur < size; compteur++)
{
diag1 += a[compteur * size + compteur];
diag2 += a[compteur * size + (size - 1 - compteur)];
}
printf("%d, %d\n", diag1, diag2);
}
