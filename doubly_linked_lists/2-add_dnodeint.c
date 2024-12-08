#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node in list
 * @head: pointer double of head
 * @n: int to node
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *noeud;
noeud = malloc(sizeof(dlistint_t));
if (noeud == NULL)
{
return (NULL);
}
noeud->n = n;
noeud->next = *head;
if (*head != NULL)
{
(*head)->prev = noeud;
}
*head = noeud;
return (noeud);
}
