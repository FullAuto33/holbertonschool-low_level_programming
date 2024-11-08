#include <stdio.h>

/**
 * main - print name file
 * @argc: arg counter
 * @argv: arg array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int compteur = 0;
(void)argv;
for (; compteur < argc; compteur++)
{
(*argv)++;
}
printf("%d\n", argc - 1);
return (0);
}
