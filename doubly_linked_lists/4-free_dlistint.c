#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free list
 *@head: pointer of head
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr;
while (head != NULL)
{
ptr = head->next;
free(head);
head = ptr;
}
}
