#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplie
 * @argc: arg counter
 * @argv: argv
 *
 * Return: 1
 */


int main(int argc, char *argv[])
{
int result = 0;
int compteur = 1;
int compteur2 = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (; compteur < argc; compteur++)
{
for (; argv[compteur][compteur2] != '\0'; compteur2++)
{
if (argv[compteur][compteur2] < '0' || argv[compteur][compteur2] > '9')
{
printf("Error\n");
return (1);
}
}
result = atoi(argv[compteur]) + result;
}
printf("%d\n", result);
return (0);
}
