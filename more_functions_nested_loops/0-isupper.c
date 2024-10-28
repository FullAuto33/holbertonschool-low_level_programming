#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if is upper.
 *
 * @c : number decimal ascii
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 65 || c <= 90)
{
return (1);
}
return (0);
}
