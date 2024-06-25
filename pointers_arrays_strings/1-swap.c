#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a : first number
 * @b : second number
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
