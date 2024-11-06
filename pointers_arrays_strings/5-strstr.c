#include "main.h"

/**
 * _strstr - lcoates a substring
 * @haystack: str to search it
 * @neddle: str to find
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
  	int compteur = 0;
	int compteur2 = 0;

	while (needle[compteur] != '\0')
		compteur++;

	while (haystack != '\0')
	{
		for (; needle[compteur2]; compteur2++)
		{
			if (haystack[compteur2] != needle[compteur2])
			  return (0);
		}
		if (compteur2 != compteur)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
