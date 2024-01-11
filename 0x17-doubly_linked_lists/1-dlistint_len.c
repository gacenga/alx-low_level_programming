#include "lists.h"
#include <stdio.h>
/**
* dlistint_len -  returns the number of elements
*
* @h:pointer
* Return:number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current;
size_t i = 0;
current = h;
if (current == NULL)
{
return (0);
}
while (current)
{
current = current->next;
i++;
}
return (i);
}
