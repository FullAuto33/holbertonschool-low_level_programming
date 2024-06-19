/*
 * Create by djelloul in holberton
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - The last digit
 *
 * Description: Prints exactly with printf "with proper grammar, but the
 *                                          outcome is a piece of art,
 *                                          followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if ((n % 10) != 0 && (n % 10) < 6) /* Si le reste de diviser
				    * par 10 est different de 0 et inferieur a 6
				    */
{
printf("Last digit of %d is %d and is less than 6 and not 0\n"
/* Affiche last ... n of n reste ...*/
, n, n % 10); /* remplace %d par n et modulo n*/
}
else if ((n % 10) > 5) /* Si le rest de n est plus grand que 5*/
{
printf("Last digit of %d is %d and is greater than 5\n"
/* Affiche last ... n of n rest plus grand que 5*/
, n, n % 10); /* remplace %d par n et modulo n*/
}
else /*Sinon*/
{
printf("Last digit of %d is %d and is 0\n"
/* Affiche last ... n is n reste et 0*/
, n, n % 10);
}

return (0);
}
