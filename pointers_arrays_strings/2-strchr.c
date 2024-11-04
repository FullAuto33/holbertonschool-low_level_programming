#include "main.h"


/**
 * _strchr - find char in str
 * @s: str to print
 * @c: char start to print
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
int compteur = 0;
for (; s[compteur] > '\0'; compteur++)
{
if (s[compteur] == c)
{
return (s + compteur);
}
}
return ('\0');
}
