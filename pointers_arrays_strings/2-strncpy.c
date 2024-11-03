#include "main.h"

/**
* _strncpy - cp two str
* @dest : str copie
* @src : str source
* @n : integer
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int compteur1 = 0;
int compteur2 = 0;

for (; compteur1 < n && src[compteur1] != '\0'; compteur1++)
{
}
for (; compteur2 < compteur1 && src[compteur2] != '\0'; compteur2++)
{
dest[compteur2] = src[compteur2];
}
for (; compteur2 < n; compteur2++)
{
dest[compteur2] = '\0';
}
return (dest);
}
