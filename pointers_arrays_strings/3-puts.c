#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: string
 *
 * Return: Always 0.
*/

void _puts(char *str)
{
int i;
char lettre;
for (i = 0; str[i] != '\0'; i++)
{
lettre = str[i];
_putchar(lettre);
}
_putchar('\n');
}
