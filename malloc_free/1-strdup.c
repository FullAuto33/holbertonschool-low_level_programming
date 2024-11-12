#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copie str with malloc
 * @str: str cp
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
int taille = 0;
int compteur = 0;
char *ar;

if (str == NULL)
{
return (NULL);
}

for (; str[taille] != '\0'; taille++)
{
}
ar = malloc(taille * sizeof(*ar) + 1);
for (; compteur < taille; compteur++)
{
ar[compteur] = str[compteur];
}
ar[compteur] = '\0';
return (ar);
}
