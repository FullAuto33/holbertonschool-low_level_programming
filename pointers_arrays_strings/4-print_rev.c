#include "main.h"

/**
 * print_rev - print str reverse
 *
 *@s : str
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
char letters;
int nbrtab = 0;
int compteur = 0;
for (; s[nbrtab] != 0; nbrtab++)
{
compteur = compteur + 1;
}
for (; compteur > 0; compteur--)
{
letters = s[compteur];
_putchar(letters);
}
_putchar('\n');
}
