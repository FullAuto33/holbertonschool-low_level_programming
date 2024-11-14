#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatene two str
 * @s1: str one
 * @s2: str two
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
char *ar;
int tailles1 = 0;
int tailles2 = 0;
int compteur = 0;
int compteurs2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (; s1[tailles1] != '\0'; tailles1++)
{
}
for (; s2[tailles2] != '\0'; tailles2++)
{
}
ar = malloc(tailles1 * sizeof(*s1) + tailles2 * sizeof(*s2));
if (ar == NULL)
{
return (NULL);
}
for (; compteur < tailles1 + tailles2; compteur++)
{
if (compteur < tailles1)
{
ar[compteur] = s1[compteur];
}
else
{
ar[compteur] = s2[compteurs2];
compteurs2++;
}
}
return (ar);
}
