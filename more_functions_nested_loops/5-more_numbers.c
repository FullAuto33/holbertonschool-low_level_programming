#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 *
 * Return: Always 0.
*/

void more_numbers(void)
{
int compteur = 0;
int chiffre = 0; /* affecte le charactere 'a' a la variable lettre*/
while (compteur < 10)
{
while (chiffre <= 14) /*Tant que lettre inferieur ou egal a z*/
{
if (chiffre <= 9)
{
_putchar('0' + chiffre);/*Renvoie le charactere de lettre*/
chiffre++;/*on change de lettre on ajoute 1 a la variable lettre*/
}
else
{
_putchar('0' + (chiffre / 10));
_putchar('0' + (chiffre % 10));
 chiffre++;
}
}
_putchar('\n');/*Renvoie un saut a la ligne*/
compteur++;
chiffre = 0;
}
}
