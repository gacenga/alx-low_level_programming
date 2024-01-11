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
dlistint_t *current;
dlistint_t *prev;
dlistint_t *new;
unsigned int i = 0;
current = *h;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
new->prev = NULL;
while (current != NULL && i < idx)
{
prev = current;
current = current->next;
i++;
}
if (i == idx)
{
prev->next = new;
new->prev = prev;
current->prev = new;
new->next = current;
}
else
{
return (NULL);
}
return (new);
}
