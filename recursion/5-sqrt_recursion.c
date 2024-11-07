#include "main.h"

/**
 * square - print square number
 * @n: integer to number
 * @result: resultat to square
 *
 * Return: Always 0.
 */

int square(int n, int result)
{
if (result * result > n)
{
return (-1);
}
else if (result * result == n)
{
return (result);
}
else
{
return (square(n, result + 1));
}
}


/**
 * _sqrt_recursion - print the square of number
 * @n: int square
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
return (square(n, 1));
}
