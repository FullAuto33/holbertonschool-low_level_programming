#include "main.h"

/**
 * _isalpha - function that checks for lowercase character.
 * @c: caractere is alphabet or no
 *
 * Return: Always 0.
*/

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
_putchar('\n');
}
