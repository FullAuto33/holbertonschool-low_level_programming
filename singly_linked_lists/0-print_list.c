#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print list
 * @h: pointer list
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
size_t compteur = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
compteur++;
}
return (compteur);
}
