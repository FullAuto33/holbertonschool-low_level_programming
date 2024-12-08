#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *noeud = *h;
dlistint_t *new;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
for (; idx != 1; idx--)
{
noeud = noeud->next;
if (noeud == NULL)
{
return (NULL);
}
}

if (noeud->next == NULL)
{
return (add_dnodeint_end(h, n));
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = noeud;
new->next = noeud->next;
noeud->next->prev = new;
noeud->next = new;
return (new);
}
