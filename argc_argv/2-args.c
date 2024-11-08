#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count to number the arguments
 * @argv: argument vector
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
