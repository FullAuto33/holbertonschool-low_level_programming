#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all number
 * @n: number of sum
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int somme;
int resultat;
unsigned int compteur = 0;

va_list arg;
va_start(arg, n);
 
if (n == 0)
{
return (0);
}
for (; compteur < n; compteur++)
{
somme = va_arg(arg, int);
resultat = resultat + somme;
}
va_end (arg);
return (resultat);
}
