#include <stdio.h>

/**
 * main - Print alphabet excepted q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre = lettre + 1)
{
if (lettre != 'q' || lettre != 'e')
{
putchar(lettre);
}
}
putchar('\n');
return (0);
}
