#include "main.h"

/**
 * print_alphabet_x10 - Function to affiche alphabet 10 fois
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char n;
int c;
c = 0;
while (c < 10)
{
for (n = 'a'; n <= 'z'; n = n + 1)
{
_putchar(n);
}
c = c + 1;
n = 'a';
_putchar('\n');
}
}
