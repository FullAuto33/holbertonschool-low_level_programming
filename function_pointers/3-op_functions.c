#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - addition
 *@a: number one
 *@b: number two
 *
 * Return: Always a+b.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - soustraction
 * @a: number one
 * @b: number two
 *
 * Return: Always a-b.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplication
 * @a : number one
 * @b: number two
 *
 * Return: Always a*b.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division
 * @a: number one
 * @b: number two
 *
 * Return: Always a/b.
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - reste division
 *@a: number one
 * @b: number two
 *
 * Return: Always a modulo b.
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
