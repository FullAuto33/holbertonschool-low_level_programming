#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: charactere to separe number
 * @n: number
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
int resultat;
unsigned int compteur = 0;
va_list arg;
va_start(arg, n);

for (; compteur < n; compteur++)
{
resultat = va_arg(arg, int);
printf("%d", resultat);
if (compteur < (n - 1) && separator != NULL)
{
printf("%s ", separator);
}
}
va_end(arg);
printf("\n");
}
