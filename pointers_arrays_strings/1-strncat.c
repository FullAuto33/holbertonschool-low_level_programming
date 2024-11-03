#include "main.h"

/**
 * _strncat - concatenate str
 * @dest : str concatenante
 * @src : str two concatenante
 * @n :  integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int compteur1 = 0;
int compteur2 = 0;

for (; dest[compteur1] != '\0'; compteur1++)
{
}
for (; compteur1 < n || src[compteur2] != '\0'; compteur2++)
{
dest[compteur1 + compteur2] = src[compteur2];
}
return (dest);
}
