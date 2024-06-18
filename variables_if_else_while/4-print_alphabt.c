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
char lettre = 'a';
while (lettre <= 'z')
{
if (lettre != 'q' || lettre != 'e')
{
putchar(lettre);
lettre++;
}
else
{
lettre++;
}
putchar('\n');
return (0);
}
}
