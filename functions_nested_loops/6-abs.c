#include "main.h"


/**
 * _abs - print absolute value.
 *
 *@c : number
 *
 * Return: Always 0.
 */

int _abs(int c)
{
int abs;
if (c < 0)
{
abs = c * -1;
return (abs);
}
return (c);
}
