#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: caractere is digit or no
 *
 * Return: Always 0.
*/


void puts2(char *str)
{
int i;
char lettre;
int compteur = 0;
for (i = 0; str[i] != '\0'; i++)
{
compteur++;
}
for (i = 0; i < compteur; i += 2)
{
lettre = str[i];
_putchar(lettre);
}
_putchar('\n');
}
