#include "main.h"

/**
 * _print_rev_recursion - print str in reverse
 *@s: str
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
if (s[0] != '\0')
{
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
}
