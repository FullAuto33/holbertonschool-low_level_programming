#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memroy with malloc
 *@b: int unsigned
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = malloc(sizeof(b));
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
