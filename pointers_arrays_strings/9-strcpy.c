#include "main.h"

/**
 * _strcpy - copied str
 *
 *@dest : buffer
 *
 *@src : str source
 *
 */


char *_strcpy(char *dest, char *src)
{
int compteur = 0;
while (src[compteur])
{
dest[compteur] = src[compteur];
compteur = compteur + 1;
}
dest[compteur] = '\0';
return (dest);
}
