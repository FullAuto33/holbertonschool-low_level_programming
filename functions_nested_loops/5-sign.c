#include "main.h"

/**
 * print_sign - print sign of the number.
 *
 *@n : number
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1);
}
}