#include "lists.h"
#include <stdio.h>
/**
* sum_dlistint - returns the sum of all the data (n)
*
* @head:first node
* Return:sum of all the data (n)
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
int i = 0;
current = head;
if (current == NULL)
{
return (0);
}
while (current)
{
i += current->n;
current = current->next;
}
return (i);
}
