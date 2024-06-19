/*
 * Create by Djelloul in Holberton
*/

#include <stdio.h>

/**
 * main - Numbers
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
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
putchar(n);/*affiche n*/
n = n + 1;/*ajoute +1 a n*/
}
putchar('\n');/*Renvoie a la ligne*/
return (0);/* retourne 0*/
}
