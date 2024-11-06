#include "main.h"

/**
 * print_chessboard - print array to tall 8
 *@a: tall of vertical array
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
int x = 0;
int y = 0;
while (x < 8)
{
y = 0;
while (y < 8)
{
_putchar(a[x][y]);
y++;
}
_putchar('\n');
x++;
}
}
