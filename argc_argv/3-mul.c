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
int result;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else if (argc > 3)
{
printf("Error\n");
return (1);
}
else
{
result = atoi(*(argv + 1)) * atoi(*(argv + 2));
printf("%d\n", result);
}
return (0);
}
