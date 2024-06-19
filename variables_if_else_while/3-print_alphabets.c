#include <stdio.h>

/**
 * main - alphABET
 *
 * Description: Write a program that prints the alphabet in
 *              lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
char lettre; /* lettre est une chaine caractere*/

for (lettre = 'a'; lettre <= 'z'; lettre++)
/*pour lettre de a to z on avance de 1 lettre*/
putchar (lettre);/*renvoie le caractere de lettre*/

for (lettre = 'A'; lettre <= 'Z'; lettre++)
/*pour lettre de A to Z on avance de 1 lettre*/
putchar(lettre);/*renvoie caractere lettre*/

putchar('\n');/*renvoie a la ligne*/

return (0);/*retourne 0*/
}
