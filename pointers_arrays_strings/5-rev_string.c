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
for (; s[compteur] != 0; compteur++)
{
}
compteur = compteur - 1;
while (nbrtab < compteur)
{
letters = s[nbrtab];
s[nbrtab] = s[compteur];
s[compteur] = letters;
nbrtab = nbrtab + 1;
compteur = compteur - 1;
}
}
