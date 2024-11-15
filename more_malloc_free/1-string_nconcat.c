#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to include
 *
 * Return: Pointer to newly allocated memory with concatenated strings,
 *         or NULL if memory allocation fails.
 */
char* string_nconcat(char* s1, char* s2, unsigned int n)
{
char *ptr;
unsigned int tailles1 = 0;
unsigned int tailles2 = 0; 
unsigned int i; 
unsigned int j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[tailles1] != '\0')
{
tailles1++;
}
while (s2[tailles2] != '\0')
{
tailles2++;
}

if (n >= tailles2)
{
n = tailles2;
}

ptr = malloc((tailles1 + n + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}


for (i = 0; i < tailles1; i++)
{
ptr[i] = s1[i];
}


for (j = 0; j < n; j++)
{
ptr[i + j] = s2[j];
}
ptr[i + j] = '\0';
return (ptr);
}
