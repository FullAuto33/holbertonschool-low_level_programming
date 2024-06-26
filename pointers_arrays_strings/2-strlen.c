#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: caractere is digit or no
 *
 * Return: Always 0.
*/

int _strlen(char *s)
{
int i;
int compteur = 0;
for (i = 0; s[i] != '\0'; i++)
compteur++;
return (compteur);
}
