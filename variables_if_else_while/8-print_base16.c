/*
 * Create by Djelloul in Holberton
*/

#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 *
*/

int main(void)
{
int n;/*n est un nombre entier integer*/
n = 0;/* n egale a 0*/
while (n <= 9)/*Tant que n est plus petit a 9*/
{
putchar('0' + n);/*affiche n*/
n = n + 1;/*ajoute +1 a n*/
}
if (n == 10) /*Si n est egal a 10*/
{
char lettre = 'a'; /* affecte le charactere 'a' a la variable lettre*/
while (lettre <= 'f') /*Tant que lettre inferieur ou egal a z*/
{
putchar(lettre);/*Renvoie le charactere de lettre*/
lettre++;/*on change de lettre on ajoute 1 a la variable lettre*/
}
}
putchar('\n');/*Renvoie a la ligne*/
return (0);/* retourne 0*/
}
