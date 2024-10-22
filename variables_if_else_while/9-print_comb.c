#include <stdio.h>

/**
 * main - Print alphabet lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
for (n = 0; n <= 9; n = n + 1)
{
putchar("0" + n);
if (n < 9)
{
putchar(",");
putchar(" ");
}
}
putchar('\n');
return (0);
}
