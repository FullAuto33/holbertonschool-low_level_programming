#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0.
*/

void print_alphabet_x10(void)
{
int compteur = 0;
char lettre = 'a'; /* affecte le charactere 'a' a la variable lettre*/
while (compteur < 10)
{
while (lettre <= 'z') /*Tant que lettre inferieur ou egal a z*/
{
_putchar(lettre);/*Renvoie le charactere de lettre*/
lettre++;/*on change de lettre on ajoute 1 a la variable lettre*/
}
_putchar('\n');/*Renvoie un saut a la ligne*/
compteur++;
lettre = 'a';
}
}
