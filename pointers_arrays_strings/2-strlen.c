#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of string
 *
 * @s : character string
 *
 * Return: length str.
 */

int _strlen(char *s)
{
int nbrtab = 0;
int compteur = 0;
for (; s[nbrtab] != 0; nbrtab++)
{
compteur = compteur + 1;
}
return (compteur);
}
