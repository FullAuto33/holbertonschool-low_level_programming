#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
int somme = 0;
while (head != NULL)
{
somme += head->n;
head = head->next;
}
return (somme);
}
