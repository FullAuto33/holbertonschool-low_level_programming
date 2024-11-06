#include "main.h"

/**
 * _strstr - lcoates a substring
 * @haystack: str to search it
 * @needle: str to find
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int compteur = 0;
int compteur1 = 0;

if (*needle == '\0')
{
return (haystack);
}
else
{
for (; haystack[compteur] != '\0'; compteur++)
{
for (;
needle[compteur1] != '\0' &&
haystack[compteur + compteur1] == needle[compteur1]; compteur1++)
{
}
if (needle[compteur1] == '\0')
{
return (&haystack[compteur]);
}
}
return (haystack + compteur);
}
}
