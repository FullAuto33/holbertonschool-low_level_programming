#include "function_pointers.h"

/**
 * array_iterator - array iterator
 * @array: array pointer
 * @size: size of array
 * @action: pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
for(; i < size; i++)
{
action(array[i]);
} 
}
