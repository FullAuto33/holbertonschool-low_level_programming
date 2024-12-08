#include "lists.h"

/**
 * sum_dlistint - somme of list
 *@head: pointer head
 * Return: Always EXIT_SUCCESS.
 */

int sum_dlistint(dlistint_t *head)
{
int somme = 0;
while (head != NULL)
{
somme += head->n;
head = head->next;
}
return (somme);
}
