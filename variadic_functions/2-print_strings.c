#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print srting
 * @separator: charactere to separe number
 * @n: str
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
char *resultat;
unsigned int compteur = 0;
va_list arg;
va_start(arg, n);
for (; compteur < n; compteur++)
{
resultat = va_arg(arg, char *);
if (resultat == NULL)
{
printf("(nil)");
}
else
{
printf("%s", resultat);
}
if (compteur < (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}
