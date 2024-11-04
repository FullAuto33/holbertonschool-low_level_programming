#include "main.h"


/**
 * _memset - fills memory with a constant byte
 * @s: char pointer to start
 * @b: char byte
 * @n: int for number byte
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int compteur = 0;
char *result = s;
while (compteur < n)
{
*s = b;
compteur = compteur + 1;
}
return (result);
}
