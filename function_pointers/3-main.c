#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num1;
int num2;
int resultat;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}

resultat = operator(num1, num2);
printf("%d\n", resultat);
return (0);  
}
