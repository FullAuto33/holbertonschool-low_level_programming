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
if (compteur % 2 != 0)
{
moyenne = compteur - 1;
moyenne = compteur / 2;
}
while (moyenne <= compteur)
{
letters = str[moyenne];
_putchar(letters);
moyenne++;
}
_putchar('\n');
}
