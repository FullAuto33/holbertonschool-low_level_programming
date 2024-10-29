#include "main.h"
#include <stdio.h>

/**
 * _puts - print str
 *
 * @str : str to print
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
char letters;
int nbrtab = 0;
for (; str[nbrtab] != 0; nbrtab++)
{
letters = str[nbrtab];
_putchar(letters);
}
}
