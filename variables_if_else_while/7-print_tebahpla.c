#include <stdio.h>

/**
 * main - Print alphabet reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lettre;
for (lettre = 'z'; lettre >= 'a'; lettre = lettre - 1)
{
putchar(lettre);
}
putchar('\n');
return (0);
}
