#include "main.h"
#include <stdlib.h>

/**
 * free_grid - concatene two str
 * @grid: grid
 * @height: size of array
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
int compteur = 0;
for (; compteur < height; compteur++)
{
free(grid[compteur]);
}
free(grid);
}
