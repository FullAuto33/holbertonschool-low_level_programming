#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create two table array
 *@width: longueur of table
 *@height: size of table
 *
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
int **ar;
int compteur1;
int compteur2;
if (width <= 0 || height <= 0)
{
return (NULL);
}
ar = (int **)malloc(sizeof(int *) * height);
if (ar == NULL)
{
return (NULL);
}
for (compteur1 = 0; compteur1 < height; compteur1++)
{
ar[compteur1] = (int *)malloc(sizeof(int) * width);
if (ar[compteur1] == NULL)
{
for (compteur2 = 0; compteur2 < compteur1; compteur2++)
{
free(ar[compteur2]);
}
free(ar);
return (NULL);
}

for (compteur2 = 0; compteur2 < width; compteur2++)
{
ar[compteur1][compteur2] = 0;
}
}

return (ar);
}
