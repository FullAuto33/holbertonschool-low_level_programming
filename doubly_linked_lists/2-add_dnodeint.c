#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t noeud;
noeud = malloc(sizeof(dlistint_t));
if (noeud = NULL)
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
}
