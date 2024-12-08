#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeibt_end - add node in end of list
 *@head: double pointer of head
 *@n: int of noeud 
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *noeud;
dlistint_t *end;
noeud = malloc(sizeof(dlistint_t));
if (noeud == NULL)
{
return (NULL);
}
noeud->n = n;
noeud->next = NULL;

if (*head == NULL)
{
noeud->prev = NULL;
*head = noeud;
return (noeud);
}
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = noeud;
noeud->prev = end;

return (noeud);
}
