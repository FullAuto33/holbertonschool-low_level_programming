#include "main.h"

/**
 * _strcat - concaten two strings
 * @dest: str contaten
 * @src: str to contaten
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
int compteur1 = 0;
int compteur2 = 0;

for (; dest[compteur1] != '\0'; compteur1++)
{
for (; src[compteur2] != '\0'; compteur2++)
{
dest[compteur1] = src[compteur2];
compteur1++;
}
}

dest[compteur1] = '\0';
return (dest);
}
