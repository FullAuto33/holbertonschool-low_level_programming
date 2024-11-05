#include "main.h"


/**
 * _strspn - lenght to substring
 *
 * @s: start to bytes
 *
 * @accept: char to accept
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
int compteur = 0;
int compteursubstring = 0;
int compteur2 = 0;

while (s[compteur] >= '\0')
{
while (accept[compteur2] >= '\0')
{
if (s[compteur] == accept[compteur2])
{
compteursubstring++;
}
compteur2++;
}
compteur++;
}
return (compteursubstring);
}
