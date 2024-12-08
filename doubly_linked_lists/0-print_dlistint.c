#include "lists.h"

/**
 * print_dlistint - print element of list
 * @h: pointer of head
 * Return: Always EXIT_SUCCESS.
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t compteur = 0;
while (h != NULL)
{
compteur++;
printf("%d\n", h->n);
h = h->next;
}
return (compteur);
}
