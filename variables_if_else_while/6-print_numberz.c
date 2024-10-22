#include <stdio.h>

/**
 * main - Print dto 0 at 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
for (n = 0; n <= 9; n = n + 1)
{
putchar('0' + n);
}
putchar('\n');
return (0);
}
