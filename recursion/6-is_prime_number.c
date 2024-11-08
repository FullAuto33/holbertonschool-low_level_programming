#include "main.h"

/**
 * prime - print 1 if is prime number
 *@n: integer of number prime
 *@n2: integer if is prime
 *
 * Return: Always 0.
 */

int prime(int n, int n2)
{
if (n % n2 == 0)
{
return (0);
}
if (n2 * n2 > n)
{
return (1);
}
return (prime(n, n2 + 1));
}

/**
 *  is_prime_number - print 1 if is prime number
 *@n: integer of number prime
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
else if (n % 2 == 0)
{
return (0);
}
else
{
return (prime(n, 2));
}
}
