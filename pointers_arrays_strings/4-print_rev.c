#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * followed by a new line.
 * @s: charactere erverse
 *
 * Return: Always 0.
*/

void print_rev(char *s)
{
int i;
char lettre;
int compteur = 0;
for (i = 0; s[i] != '\0'; i++)
{
compteur++;
}
for (i = compteur; i > 0; i--)
{
lettre = s[i-1];
_putchar(lettre);
}
_putchar('\n');
}
