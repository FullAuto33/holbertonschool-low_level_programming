#include "main.h"

/**
 * _strpbrk - print str accept
 * @s: str phrase
 * @accept: char to accept
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
int compteur = 0;
int compteur2 = 0;

while (s[compteur] != '\0')
{
while (accept[compteur2] != '\0')
{
if (s[compteur] == accept[compteur2])
{
return (s);
}
compteur2++;
}
compteur++;
}
return (0);
}
