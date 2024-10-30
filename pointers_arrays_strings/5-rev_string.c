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
int compteur2 = 0;
char *s1;
for (; s[nbrtab] != 0; nbrtab++)
{
compteur = compteur + 1;
}
while (compteur >= 0)
{
  /*printf("%d", compteur);*/
letters = s[compteur];
printf("%c", letters);
s1[compteur2] = letters;
compteur = compteur - 1;
compteur2 = compteur2 + 1;
}
*s = *s1;
/*printf("%c", letters);*/
}
