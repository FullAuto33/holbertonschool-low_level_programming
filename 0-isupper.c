#include "main.h"

/**
 * _isupper - function that checks for upper character.
 * @c: caractere is upper or no
 *
 * Return: if upper 1 and is lower 0.
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
