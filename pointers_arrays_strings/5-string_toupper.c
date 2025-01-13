#include "main.h"

/**
* string_toupper - str to UPPER
* @str : str to convert to upper
* Return: Always 0.
*/

char *string_toupper(char *str)
{
int compteur = 0;
while (str[compteur] != '\0')
{
if (str[compteur] >= 'a' && str[compteur] <= 'z')
{
str[compteur] -= 32;
}
compteur++;
}
return (str);
}
