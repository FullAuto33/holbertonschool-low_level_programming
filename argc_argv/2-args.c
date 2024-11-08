#include <stdio.h>

/**
 * main - print arg
 * @argc: arg counter
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int compteur = 0;
for (; compteur < argc; compteur++)
{
printf("%s\n", argv[compteur]);
}
return (0);
}
