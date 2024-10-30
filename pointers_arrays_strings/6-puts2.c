#include "main.h"

/**
 * puts2 - Script puts 2 str
 *
 * @str : str
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
char letters;
int nbrtab = 0;
int compteur = 0;
for (; str[compteur] != 0; compteur++)
{
}
for (; str[nbrtab] != 0 && nbrtab <= compteur; nbrtab = nbrtab + 2)
{
letters = str[nbrtab];
_putchar(letters);
}
_putchar('\n');
}
