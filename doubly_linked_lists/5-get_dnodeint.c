#include "lists.h"

/**
 * get_dnodeint_at_index - node in list
 * @head: pointer to head
 * @index: node index
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
