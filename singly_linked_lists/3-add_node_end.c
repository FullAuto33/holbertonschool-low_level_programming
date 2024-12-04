#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * add_node_end - add node in the end of list
 * @head: pointer to head
 * @str: str to the list
 *
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *end = *head;
list_t *node = malloc(sizeof(list_t));
int compteur = 0;
const char *lenght = str;
for (; *lenght != '\0'; lenght++)
{
compteur++;
}
if (node == NULL)
{
return (NULL);
}
node->str = strdup(str);
node->len = compteur;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (*head);
}
while (end->next)
{
end = end->next;
}
end->next = node;
return (node);
}
