#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* insert_dnodeint_at_index - inserts a new node at a given position
*
* @h:first node
* @idx:position
* @n:data
* Return:address of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current, *new;
unsigned int i = 0;
current = *h;
if (current == NULL)
{
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
if (idx == 0)
{
return (add_dnodeint(h, n));
}
new->n = n;
new->next = NULL;
new->prev = NULL;
while (current != NULL && i < idx)
{
current = current->next;
i++;
}
if (i == idx)
{
if (current->prev != NULL)
{
current->prev->next = new;
}
new->prev = current->prev;
new->next = current;
current->prev = new;
}
else
{
free(new);
return (NULL);
}
return (new);
}
