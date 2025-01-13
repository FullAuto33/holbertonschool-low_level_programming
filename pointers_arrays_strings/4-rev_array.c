#include "main.h"

/**
* reverse_array - reverse array
* @a : array
* @n : number element of array
* Return: Always 0.
*/

void reverse_array(int *a, int n)
{
int index = n - 1;
int ptr;

for (; index >= n / 2; index--)
{
ptr = a[n - index - 1];
a[n - index - 1] = a[index];
a[index] = ptr;
}
}
