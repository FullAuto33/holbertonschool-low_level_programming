#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - add node in list
 * @head: pointer to head
 * @str: str to new node
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
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
node->next = *head;
*head = node;
return (*head);
}
