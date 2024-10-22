#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre = lettre + 1)
{
putchar(lettre);
}
if (lettre == 'z')
{
putchar('\n');
}
return (0);
}
