#include "main.h"

/**
 * _isalpha - check is alphabetic.
 *
 * @c : charactere
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
