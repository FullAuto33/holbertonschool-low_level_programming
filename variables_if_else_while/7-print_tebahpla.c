/*
 *Create by Djelloul in Holberton
 */
#include <stdio.h>

/**
 * main - I sometimes suffer from insomnia.
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
char lettre = 'z'; /* affecte le charactere 'a' a la variable lettre*/
while (lettre >= 'a') /*Tant que lettre inferieur ou egal a z*/
{
putchar(lettre);/*Renvoie le charactere de lettre*/
lettre--;/*on change de lettre on ajoute 1 a la variable lettre*/
}
putchar('\n');/*Renvoie un saut a la ligne*/
return (0);/*retourne 0*/
}
