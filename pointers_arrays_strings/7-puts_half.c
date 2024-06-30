#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string
 *
 * Return: Always 0.
*/

void puts_half(char *str)
{
int i;
char lettre;
int compteur = 0;
for (i = 0; str[i] != '\0'; i++)
{
compteur++;
}
if ((compteur % 2) != 0)
{
i = (compteur - 1) / 2;
}
else
{
i = (compteur / 2) + 1;
}
for (; str[i] != '\0'; i++)
{
lettre = str[i];
_putchar(lettre);
}
_putchar('\n');
}
