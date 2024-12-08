#include "lists.h"

/**
 * free_dlistint - free list
 *@head: double pointer of head
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
list_t *ptr;
while (head != NULL)
{
ptr = head->next;
free(head);
head = ptr;
}
}
