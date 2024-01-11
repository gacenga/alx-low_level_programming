#include "lists.h"
#include <stdio.h>
/**
* get_dnodeint_at_index - returns the nth node
*
* @head:first node
* @index:n
* Return:nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
dlistint_t *nth;
unsigned int i = 0;
current = head;
if (current == NULL)
{
return (NULL);
}
while (current != NULL && i <= index)
{
nth = current;
current = current->next;
i++;
}
if (i == index + 1)
{
return (nth);
}
else
{
return (NULL);
}
}
