#include "main.h"

/**
 * _memcpy - copie memory
 * @dest: pointer dest to copies
 * @src: pointer source
 * @n : byte number integer
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *result = dest;
unsigned int compteur = 0;

while (compteur < n)
{
*(result + compteur) = *(src + compteur);
compteur = compteur + 1;
}
return (result);
}
