#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int prime(int n, int n2)
{
if (n % n2 == 0)
{
return (0);
}
return (prime(n, n2 + 1));
}

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
return (prime(n, 3));
}
}
