#include <stdio.h>

/**
 * main - Print number base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lettre;
int n;
for (n = 0; n < 10; n = n + 1)
{
putchar('0' + n);
}
for (lettre = 'a'; lettre <= 'f'; lettre = lettre + 1)
{
putchar(lettre);
}
putchar('\n');
return (0);
}
