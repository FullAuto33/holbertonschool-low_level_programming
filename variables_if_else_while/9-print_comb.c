/*
 * Create by Djelloul in Holberton
*/

#include <stdio.h>

/**
 * main - Numbez
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
char virgue = ','; /* on donne un charactere , a virgue*/
char space = ' ';/* on donne un charactere ' ' a space*/
n = 0;/* n egale a 0*/
while (n <= 9)/*tant que n est plus petit a 9*/
{
putchar('0' + n);/*affiche n*/
if (n < 9)/*si n est plus petit que 9*/
{
putchar(virgue);/* renvoie la virgule*/
putchar(space);/* renvoie espcace */
}
n = n + 1;/*ajoute +1 a n*/
}
putchar('\n');/*Renvoie a la ligne*/
return (0);/* retourne 0*/
}
