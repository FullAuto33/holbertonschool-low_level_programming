#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the string
 *
 *@s : string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
char letters;
int nbrtab = 0;
int compteur = 0;
for (; s[nbrtab] != 0; nbrtab++)
{
compteur = compteur + 1;
}
for (; compteur > 1; compteur--)
{
letters = s[compteur];
}
printf("%c", letters);
}
