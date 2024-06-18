/*
 * Create by djelloul in holberton
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Positive anything is better than negative nothing
 *
 * Description: This program will assign a random number to
 *               the variable n each time it is executed.
 *                Complete the source code in order to print
 *                 whether the number stored in the variable n is
 *                  positive or negative.
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)/* Fonction si n est plus grand que 0*/
	printf("%d is positive\n", n); /*Affiche n est positive*/
	else if (n == 0)/* Fonction si n est egal a zero*/
	printf("%d is zero\n", n);/*Affiche n est egal a zero*/
	else/* Fonction sinon pour n inferieur a0*/
	  printf("%d is negative\n", n);/*affiche n est negative*/

	/* your code goes there */
	return (0);/*retourne 0*/
}
