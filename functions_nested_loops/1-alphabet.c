#include "main.h"

/**
 * print_alphabet - Function to affiche alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre = lettre + 1)
{
_putchar(lettre);
}
_putchar('\n');
}