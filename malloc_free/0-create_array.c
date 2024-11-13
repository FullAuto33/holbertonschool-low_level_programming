#include "main.h"
#include <stdlib.h>

/**
 * create_array - create a array
 * @c: char
 * @size: size of array
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
unsigned int compteur = 0;
char *ar;
ar = malloc(size * sizeof(*ar));

if (size == 0)
{
return (NULL);
}
if (ar == NULL)
{
return (NULL);
}
for (; compteur < size; compteur++)
{
ar[compteur] = c;
}
return (ar);
}
