#include "main.h"

/**
 * puts_half - print half superior str
 *
 *@str : str
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
char letters;
int moyenne;
int compteur = 0;
for (; str[compteur] != 0; compteur++)
{
}
moyenne = compteur / 2;
if (compteur % 2 != 0)
{
moyenne = moyenne + 1;
}
while (moyenne < compteur)
{
letters = str[moyenne];
_putchar(letters);
moyenne++;
}
_putchar('\n');
}
