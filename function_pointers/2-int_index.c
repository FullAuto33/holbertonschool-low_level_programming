#include "function_pointers.h"

/**
 * int_index - searches integer.
 * @array: int array
 * @size: size array
 * @cmp: ptr
 *
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int compteur = 0;

if (array == NULL || cmp == NULL)
{
return (-1);
}
for (; compteur < size; compteur++)
{
if (cmp(array[compteur]) != 0)
{
return (compteur);
}
}
return (-1);
}
