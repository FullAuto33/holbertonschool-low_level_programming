#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integers
 *
 * @a : first number swap
 *
 * @b : second integer swap
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
