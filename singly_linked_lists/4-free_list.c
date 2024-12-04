#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list space memory
 * @head: head pointer
 * Return: Always 0.
 */

void free_list(list_t *head)
{
list_t *ptr;
while (head != NULL)
{
ptr = head->next;
free(head);
head = ptr;
}
}
