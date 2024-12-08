#include "lists.h"

/**
 * dlistint_len - number of element in list
 * @h: pointer header
 * Return: Always EXIT_SUCCESS.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t compteur = 0;
while (h != NULL)
{
compteur++;
h = h->next;
}
return (compteur);
}
