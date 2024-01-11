#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* elete_dnodeint_at_index - deletes the node at index
*
* @head:first node
* @index:position
* Return:1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *working;
unsigned int i = 0;
if (head == NULL || *head == NULL)
{
return (-1);
}
current = *head;
if (index == 0)
{
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
free(current);
return (1);
}
while (current != NULL && i < index)
{
working = current;
current = current->next;
i++;
}
if (current == NULL)
{
return (-1);
}
working->next = current->next;
if (current->next != NULL)
{
current->next->prev = working;
}
free(current);
return (1);
}
