#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - go to index and delete the node
 *@head: double pointer to head
 * @index: int index
 * Return: Always EXIT_SUCCESS.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *noeud = *head;

if (*head == NULL)
{
return (-1);
}
for (; index != 0; index--)
{
if (noeud == NULL)
{
return (-1);
}
noeud = noeud->next;
}

if (noeud == *head)
{
*head = noeud->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
}

else
{
noeud->prev->next = noeud->next;
if (noeud->next != NULL)
noeud->next->prev = noeud->prev;
}

free(noeud);
return (1);
}
