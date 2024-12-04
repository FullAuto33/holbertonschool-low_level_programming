#include "lists.h"

/**
 * list_len - len of the list
 * @h: pointer list
 *
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
size_t compteur = 0;
while (h != NULL)
{
h = h->next;
compteur++;
}
return (compteur);
}
