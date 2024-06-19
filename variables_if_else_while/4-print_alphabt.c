/*
 *Create by Djelloul in Holberton
 */

#include <stdio.h>

/**
 * main - I sometimes suffer from insomnia.
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 *
*/

int main(void)
{
char lettre = 'a';/*ajoute le caractere 'a' a la variable lettre*/
while (lettre <= 'z')/*tant que lettre est inferieur a z*/
{
if (lettre != 'q' && lettre != 'e')/*si lettre et different de q et e*/
{
putchar(lettre);/*renvoie lettre*/
lettre++;/*ajoute +1 a lettre*/
}
else/*sinon*/
{
lettre++;/*ajoute +1a lettre*/
}}

putchar('\n');/*renvoie a la ligne*/
return (0);/*retourne 0*/
}
