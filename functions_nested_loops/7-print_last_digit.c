#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 *
 *@r:number to print last digit
 * Return: Always 0.
*/

int print_last_digit(int r)
{
int dernier_chiffre = r % 10;
if (dernier_chiffre < 0)
dernier_chiffre = dernier_chiffre * -1;
_putchar('0' + dernier_chiffre);
return (dernier_chiffre);
}
