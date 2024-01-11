#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_dnodeint_end - adds a new node at the end
*
* @head:pointer to pointer
* @n:data
* Return:address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *end;
dlistint_t *current;
dlistint_t *last;
current = *head;
end = malloc(sizeof(dlistint_t));
if (end == NULL)
{
return (NULL);
}
end->n = n;
end->prev = NULL;
end->next = NULL;
if (current == NULL)
{
*head = end;
}
else
{
while (current)
{
last = current;
current = current->next;
}
last->next = end;
end->prev = last;
}
return (end);
}
