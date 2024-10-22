#include <stdio.h>

/**
 * main - Print alphabet lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char virgule;
char espace;
int n;
virgule = ',';
espace = ' ';
for (n = 0; n <= 9; n = n + 1)
{
putchar('0' + n);
if (n < 9)
{
putchar(virgule);
putchar(espace);
}
}
putchar('\n');
return (0);
}
