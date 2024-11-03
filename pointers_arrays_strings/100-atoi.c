#include "main.h"


/**
 * _atoi - convert str to integer
 *
 *@s : str
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
int posneg = 1;
int result = 0;
int compteur = 0;

if (s[0] == '-')
{
posneg = -1;
compteur++;
}

if (s[0] == '+')
{
compteur++;
}
while (s[compteur] != '\0')
{
if (s[compteur] >= '0' && s[compteur] <= '9')
{
result = result * 10 + (s[compteur] - '0');
}
else
{
break;
}
compteur++;
}
result = result *posneg;
return (result);
}
